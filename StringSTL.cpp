#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;

    a = "I love Coding Very Much!\n";
    cout<<"Print String1:" << a << endl;

    b =a;
    cout<<"\nPrint String2:" << b << endl;

    cout<<"Add two String:";
     c= a +b;
     // cout << c << endl;
      printf("%s\n",c.c_str());
      cout<<"Length of String:"<<c.size()<<endl;

      cout<<"Print Each Character of concetenate string:\n";
       for(int i=0;i<c.size();i++)
         cout<< c[i] << endl;


    return 0;
}
