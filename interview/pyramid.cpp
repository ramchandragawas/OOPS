#include<iostream>
#include<iomanip>
using namespace std;

void pyramid(int n = 5) {
    int k = 2;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            int num = (k * (2 * k - 1));
            cout <<setw(5)<<setfill('0')<< num <<" ";
            k += 2;
        }
        cout << endl;
        cout<<endl;
    }
}
void p2(int n=5){
       int k = 2;
    for (int i = n; i >=1; i--) {
        for (int j = 1; j <= i; j++) {
            char num = '*';
            cout << num <<" ";
            k -= 2;
        }
        cout << endl;
    }
}

    void p3(int n=10){
       char k =2 ;
    for (int i = 3; i <=n; i+=2) {
        for (int j = 1; j <= i; j++) {
            char num = '*';
            cout << num <<" ";
            k += 3;
        }
        cout << endl;
    }
}


int main() {
    int N = 10;
    pyramid(N);
  cout<<endl;
    p2(N);
    cout<<endl;
    p3(N);
    return 0;
}
