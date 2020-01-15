#include<iostream>
using namespace std;

void selection_Sort(int A[], int n){

    int i,j,min_index,temp;

     for(i=0;i<n-1;i++) {

         min_index = i;

           for(j=i+1;j<n;j++) {

             if( A[j] < A[min_index] ) {

                 min_index = j;

             }

           }

         if(min_index != i) {

             temp = A[i];
             A[i] = A[min_index];
             A[min_index] = temp;


         }
     }

}
       /* Function to print an array */
         void printArray(int A[], int n){
              int i;
                for (i=0; i < n; i++){
                     cout << A[i] << " ";
                           cout << endl;
                     }

         }


// Driver program to test above functions
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_Sort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}



