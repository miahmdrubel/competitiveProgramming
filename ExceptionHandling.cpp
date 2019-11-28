

#include<iostream>
using namespace std;



int main()
{

    while(1){
    /*
    try: when there has any possibilities to have an error in the code,We will take this part in the
     try block.
     */

    try{
    double num1,num2;
     cout<<"Enter Number 1:";
     cin>> num1;

     cout<<"\n Enter Number 2:";
     cin>> num2;

      if(num2==0)
      {
          throw -1;
      }


     double result = num1/num2;
     cout<<"Result:" << result << endl;
    }

    /*
       Which Value is throw that is catch by catch block.
    */

    catch(...)
    {
        cout <<"Number one is not Dividable by 0.Please try again." <<endl;
    }

    }

    return 0;
}
