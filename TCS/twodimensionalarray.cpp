#include<iostream>
using namespace std;

void sum(int n,int arr[][100])
{
  int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
      {
        sum1+=arr[i][j];
        sum2 += arr[i][n - i - 1];
    cout << abs(sum1 - sum2) << endl;
      }
}
int main()
{
  int n;
  cout<<"enter size of array:";
  cin>>n;
  int arr[100][100];
  for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

         cin >> arr[i][j];
    }
    }
    sum(n,arr);
}

}
