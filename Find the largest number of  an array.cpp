#include <iostream>
using namespace std;


int main()

{
    int arr[]={20,10,40,5};
    int lNum = arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);


   for(int i=1; i<size; i++)
   {
       if(arr[i] > lNum)
       {
           lNum = arr[i];
       }
   }

   cout << "Largest Number of Array is:->" << lNum << endl;


    return 0;
}
