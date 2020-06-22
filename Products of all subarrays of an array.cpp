
/*
 Programs of finding  Products of Sub arrays
of an array.
*/

#include<bits/stdc++.h>
using namespace std;


// Function to Product of all Sub arrays

void product_Subarray(long long int arr[], int n)
{
    long long int sumofproducts = 1;

      for(int i=0; i <n; i++)
      {
          long long int product =1;

           for(int j=i; j<n; j++)
           {
               product = product * arr[j];

               cout << "\n Products are:->" << product <<" ";
               sumofproducts = sumofproducts * product;
           }

      }
    cout << "\n Products of All Sub-arrays:->" << sumofproducts << endl;
}

// Driver Code

int main()
{
    long long int arr[] = {10,3,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call

    product_Subarray(arr,n);

    return 0;
}



















