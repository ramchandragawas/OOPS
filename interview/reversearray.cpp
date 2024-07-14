#include<iostream>
using namespace std;

 void reversearr(int arr[], int size)
 {

     int reversearr[size];

     for(int i=0; i<size;i++){
         reversearr[i]=arr[size-i-1];
        //cout<<reversearr[i]<<""<<endl;
     }

     cout<<"reverse array:"<<endl;
     for(int i=0;i<size;i++)
     {
         cout<<reversearr[i]<<"" <<endl;
     }
 }
int main(){
    int originalArr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(originalArr) / sizeof(originalArr[0]);

    reversearr(originalArr, size);
    }
