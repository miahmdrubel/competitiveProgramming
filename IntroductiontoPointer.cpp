/*
Pointer is a variable that store the address of a variable.
Or Point to another variable. In the below  Pointer p point to variable x
and store the address of x.

*/


#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
    int x =5;
    int *p=&x;
     int num1=5;
    int num2=10;

    int *m=&num1;
    int *n=&num2;
   // p=&x;

    cout <<"Value of x:"<< x <<endl;
    cout <<"Address of x:"<< &x <<endl;
    cout <<"Value of p:"<< p <<endl;  //Value of P will be address of x.
    cout <<"Storing Value of p:"<< *p <<endl; //*p print the value of x
cout<<" ------------**********************************--------"<<endl;


       int result = *m + *n;

    cout<<"Result:"<< result <<endl;



 getch();
     return 0;
}
