
#include <iostream>
using namespace std;

int main()
{
    int num,bin[10],res,rem,i;
    int ntest;

    cout << "How Many Case You Want to Test:->";
    cin >> ntest;

    for(int k=1; k<=ntest; k++ )
    {

    cout << endl << "Take a Decimal as a Input:->";
    cin >> num;

    i=0;
    while(num !=0)
    {
    res = num / 2;
     bin[i] = num % 2;
     i++;
     num = res;
    }

   cout << endl << "Binary Value of this Decimal Number:->";

    for(int j=i-1; j>=0; j--)
    {
        cout << bin[j] <<" ";
    }
  }
    return 0;
}
