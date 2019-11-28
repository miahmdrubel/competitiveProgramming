#include<iostream>
using namespace std;

void test(int x)throw(int,double)
{
    if(x==0) throw 1;
    if(x==1) throw 1.0;
    //throw 'x';
}



int main()
{
    int m;
    cin >> m;

    try{
       test(m);
       cout<<"Exiting try."<<endl;

     }

       catch(...)
       {
           cout << "Catch all."<< endl;
       }

      cout <<"Finish the Code!!!!" << endl;

     return 0;
}
