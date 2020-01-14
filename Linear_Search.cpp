/*
  If We Search Every Element of the array one by one then
  that is called Linear Search.In the Book Self essential Book Search in diffrent Step
  one by One.

  Time Complexity=O(n) //Total Number of  Element in the array is n.

  and Space Complexity=O(1) Because In this Program which number is Search those
  Numbers are given in the array.

*/


#include<bits/stdc++.h>
using namespace std;

   int linear_Search(int arr[], int n, int x){
          int i;
            for(i=0;i<n;i++){
                  if(arr[i]==x){
                    return i;
                  }
                  return -1; //Element is not Found in this List of Array

            }


   }


int main(){

 int arr[] = {4,10,5,101,23,5};
 int n = sizeof(arr)/sizeof(arr[0]);

 int x =200;
  int index = linear_Search(arr,n,x);

    if( index == -1){
        cout<<"Element is Not Present in this array.\n";
    }else{
      cout<<"Element is Present in Position "<< index << endl;
    }

return 0;
}
