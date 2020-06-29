#include <iostream>
using namespace std;

int main()
{
    int i,j,k,l;
    int mat1[4][4],mat2[4][4];
    int mul;

    do
    {

     cout <<"\nNumber of Column in Matrix1:->";
       cin >> i;
     cout <<"\nNumber of Column in Matrix1:->";
       cin >> j;
       cout <<"\nNumber of Row in Matrix2:->";
       cin >> k;
       cout <<"\nNumber of Row in Matrix2:->";
       cin >> l;
    }while((i !=l) && (j !=k));

    cout <<"\nMatrix1:->\n";

     for(int row1=0; row1<i; row1++)
     {
         for(int col1=0; col1<j; col1++)
         {
             cin >> mat1[row1][col1];
         }
         cout <<endl;
     }

     cout <<"\nMatrix2:->\n";

     for(int row2=0; row2<k; row2++)
     {
         for(int col2=0; col2<l; col2++)
         {
             cin >> mat2[row2][col2];
         }
         cout <<endl;
     }

     cout << "\nMultiplication of Two Matrix:->\n";

     for(int m=0; m<i; m++)
     {
         for(int n=0; n<l; n++)
         {

                 mul =0;
             for(int p=0; p<j; p++)
             {
                mul+= mat1[m][p] * mat2[p][n];

             }
                cout << mul <<" ";

         }
         cout << endl;
     }

    return 0;
}
