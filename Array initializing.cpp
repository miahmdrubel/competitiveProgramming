#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[5]={1};

    //  if array is initialized with few elements, remaining elements will be
       //initialized to 0. Therefore, 1 followed by 0, 0, 0, 0 will be printed.


      for(i=0; i<5; i++)
      {
          cout << arr[i] << " "; // 1 0 0 0 0
      }

      cout <<endl;


// Que - 2. Predict output of the following program:


    int a[][2] = {{1,2},{3,4}};
    int k, j;

    for (k = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
        {
            cout << a[k][j] << " "; // compile time error because column  number initializing is mandatory.
        }

    return 0;
}
