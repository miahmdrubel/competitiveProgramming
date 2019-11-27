#include<iostream>
using namespace std;

void Xtest(int test)
{
    cout<<"Inside Xtest,test is:"<< test <<endl;
    if(test) throw test;
}

int main()
{
    cout<<"Start\n";

    try{
     cout<<"Inside try Block\n";
     //Xtest(0);
     Xtest(1);
     Xtest(2);


    }

    catch(int i)
    {
        cout<<"Caught one!,number is:";
        cout<< i << endl;
    }

    cout<<"end";



    return 0;
}
