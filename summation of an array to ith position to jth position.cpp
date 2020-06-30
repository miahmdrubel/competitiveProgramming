#include <bits/stdc++.h>
using namespace std;

void summation(int arr[],int n,int p,int q)
{
    int sum=0;
    for(int i=p; i<=q;i++)
    {
        sum+=arr[i];    }

    cout <<"\n Summation of " << p <<" th " << q <<" th is "<< sum<<endl;

}

int main()
{

int arr[] ={10,20,40,-4,5};
int n = sizeof(arr)/sizeof(arr[0]);
int p,q;

cout <<"\n First Position of array:->";
cin>>p;
cout <<"\n Second Position of array:->";
cin>>q;

 summation(arr,n,p,q);

//cout <<"\n Summation of " << p <<"th" << q <<"th is"<< sum<<endl;
return 0;

}
