#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[]={10,29,40,56,22,15};
    int size1 = sizeof(arr) / sizeof(arr[0]),i;

    cout << "Original Array Before Sorting:->";

    for(i=0; i<size1; i++)
    {
        cout << arr[i] <<" ";
    }

    sort(arr,arr+size1);

    cout << "\n Original Array After Sorting:->";

    for(i=0; i<size1; i++)
    {
        cout << arr[i] <<" ";
    }

    cout <<"\nSecond Lowest Element of the sorted array:->";
       cout <<arr[1];

    cout <<"\nSecond highest Element of the sorted array:->";
       cout <<arr[size1-2];


    return 0;
}
