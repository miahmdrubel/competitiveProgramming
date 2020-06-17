/*
Find Sum of Elements in the given array.
*/

#include <iostream>
using namespace std;

double Summation(int arr[],int n)
{
    double sum =0;

      for(int i=0; i<n; i++)
      {
          sum +=arr[i];

      }
      return sum;
}


// Driver Code

int main()
{
    int arr[] = {1,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);

      cout <<"Summation of Array:->" << Summation(arr,n) << endl;

    return 0;
}
