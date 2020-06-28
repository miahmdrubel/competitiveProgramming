


#include <iostream>
using namespace std;

static int z =0;
int main()
{
    int arr[] = {8,9,0,1,2,0,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i,k,j;
    int arr2[100];


    cout << " Original Array:->";

      for(j=0; j<n; j++)
      {
          cout << arr[j] <<" ";
      }

      cout <<"\n Modified array:->";

    for(i=0; i <n; i++)
    {
        if(arr[i] == 0)
        {
            z++;

        } else{
          cout << arr[i] << " ";

        }

       }


        for(k=0; k<z; k++)

    {
        cout << "0" << " ";
    }



       return 0;

}
