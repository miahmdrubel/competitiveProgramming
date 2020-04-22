#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
   long long n,temp,decimal =0;
   int i,test;

   cout << "How many Case You Want to Test:->";
   cin >> test;

   for (int input =1; input <=test; input++)
   {

   cout << endl << " Binary Input:->";
    cin >> n;

    i=0;
    while( n !=0)
    {
        temp = n % 10;
        n = n / 10;

        decimal = decimal + temp * pow(2,i);
        i++;

     }
    cout << endl << "Decimal Value:->" << decimal << endl;
   }


    return 0;
}
