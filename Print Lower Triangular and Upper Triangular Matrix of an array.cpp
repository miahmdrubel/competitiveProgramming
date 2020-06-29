#include <bits/stdc++.h>
using namespace std;



int main()
{

    int i,j,mat1[4][4],k,l,m,n,mat2[4][4];

      cout <<"\nNumber of Row in Matrix:->";
       cin >> i;
     cout <<"\nNumber of Column in Matrix:->";
       cin >> j;

    cout <<"\nMatrix1:->\n";

     for(int row1=0; row1<i; row1++)
     {
         for(int col1=0; col1<j; col1++)
         {
             cin >> mat1[row1][col1];
         }
         cout <<endl;
     }


    cout <<"Lower Triangular Matrix:->\n";

    for(k=0; k<i; k++)
    {
        for(l=k+1; l<j; l++)
        {
            mat1[k][l] = 0;
        }
    }

     for(int row1=0; row1<i; row1++)
     {
         for(int col1=0; col1<j; col1++)
         {
             cout<< mat1[row1][col1]<<" ";
         }
         cout <<endl;
     }




     cout <<"\nMatrix2:->\n";

     for(int row2=0; row2<i; row2++)
     {
         for(int col2=0; col2<j; col2++)
         {
             cin >> mat2[row2][col2];
         }
         cout <<endl;
     }
    cout <<"Upper Triangular Matrix:->\n";

    for(m=1; m<i; m++)
    {
        for(n=0; n<m; n++)
        {
            mat2[m][n] = 0;
        }
    }

     for(int row1=0; row1<i; row1++)
     {
         for(int col1=0; col1<j; col1++)
         {
             cout<< mat2[row1][col1]<<" ";
         }
         cout <<endl;
     }


    return 0;
}
