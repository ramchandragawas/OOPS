Question:
Problem Statement-: Given a square matrix, calculate the absolute difference between the sums of its diagonals.
1 2 3
4 5 6
9 8 9
The left-to-right diagonal = 1+5+9 = 15; The right to left diagonal = 3+5+9 = 17; Their absolute difference is |15-
17| = 2
Function Description: diagonalDifference takes the following parameter: int arr[n][m]: an array of integers
Input Format: The first line contains a single integer, n the number of rows and columns in the square matrix arr
Each of the next n lines describes a row, arr[i] and consists of n space-separated integers arr[i][j]
Output Format: Return the absolute difference between the sums of the matrix’s two diagonals as a single
integer.
Sample Input:
 3
 11 2 4
 4 5 6
 10 8 -12
Sample Output:
 15




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
