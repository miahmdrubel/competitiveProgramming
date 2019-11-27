#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
cout<<"Pushing Elements to the  vector array:\n";
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
 cout<<"\nSize of the Vector array:"<< v.size() <<endl;

  for(int i=0;i<v.size();i++)
    cout<< v[i] << endl;

  cout<<"We can Copy Vector easyly which is not Possible in array:\n";
     vector<int>t;

     t =v;

       for(int j=0;j<t.size();j++)
    cout<< t[j] << endl;


vector< int > v1; v1.push_back(1); v1.push_back(2); v1.push_back(3);
    vector< int > :: iterator k;

    cout<<"Iterator Behave Like Pointer.\n";
         for(k= v1.begin();k<v1.end();k++)
         {
             printf("%d\n",*k);
         }



}
