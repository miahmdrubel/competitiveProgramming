#include<iostream>
using namespace std;

int main()
{
    cout<<"First Approach:->";
    int num;
    double sum=0;
    cout<<"\nEnter the last number of Series: ";
     cin>> num;

     for(int i=1;i<=num;i++)
     {
         if(i%2==0)
            sum-=i;
         else
            sum+=i;
     }
     cout<<"Summation of the Series is:"<<sum<<endl;

cout<<"..................Second Approach.................\n";

 int n;
  cout<<"Num2:";
  cin>>n;

  double sum2=0;
   if(n%2==0)
    sum2+=(-n)/2;
   else
    sum2+=(n+1)/2;

   cout<<"Sum2:"<<sum2<<endl;




    return 0;
}
