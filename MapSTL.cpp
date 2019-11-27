#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <string,int> n;
     string bossName;

     while(cin>> bossName)
     {
         if(bossName=="Rubel") break;


         n[bossName]++;

         cout<< bossName <<"  sir has  "<< n[bossName] <<"  ta in our Office" <<endl;
     }
cout<< bossName <<" is our real boss in programming World.\n";

    return 0;
}
