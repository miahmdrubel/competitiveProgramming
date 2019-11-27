
#include<iostream>
using namespace std;

int main()
{
    int num;
    static int count = 0;
 cout << "Enter Number:";
      cin >> num;
    while( num != 1){

        if ( num % 2 == 1){
            num = num *3 + 1 ;
              count += 1;
        }

      else{
       num = num /2;
     count += 1;
      }
    }

   cout << "Cycle Number of is :"<< count +1 <<endl;
    return 0;
}

