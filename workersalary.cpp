#include <iostream>
#include <string>

using namespace std;

class Worker {
protected:
    string name;
    double salaryRate;

public:
    Worker(const string& name, double salaryRate)
        : name(name), salaryRate(salaryRate) {}

    virtual double compute_pay(int hours) const = 0;
};

class HourlyWorker : public Worker {
public:
    HourlyWorker(const string& name, double salaryRate)
        : Worker(name, salaryRate) {}

    double compute_pay(int hours) const override {
        if (hours <= 40) {
            return salaryRate * hours;
        } else {
            double overtimeHours = hours - 40;
            return (salaryRate * 40) + (salaryRate * 1.5 * overtimeHours);
        }
    }
};

class SalariedWorker : public Worker {
public:
    SalariedWorker(const string& name, double salaryRate)
        : Worker(name, salaryRate) {}

    double compute_pay(int hours) const override {
        return salaryRate * 40;
    }
};

int main() {
    Worker* worker1 = new HourlyWorker("John", 10.0);
    Worker* worker2 = new SalariedWorker("Jane", 15.0);

    cout << "Worker 1 weekly pay: " << worker1->compute_pay(45) << endl;
    cout << "Worker 2 weekly pay: " << worker2->compute_pay(35) << endl;

    delete worker1;
    delete worker2;

    return 0;
}

