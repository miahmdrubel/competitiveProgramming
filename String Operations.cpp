#include <bits/stdc++.h>
#include <string>

using namespace std;


int main()
{
    string str1;
    string str2 ="I WANT TO BE A GOOD HUMAN BEING";
    string str3="when There is no way Allah will make a way.";
    char ch[80];

    cout <<"Input:-> ";
    getline(cin,str1);  // string input


    str1.push_back('s');
    cout <<"\n String after push_back():->" << str1 <<endl;
/*
    str1.pop_back();
    cout <<"\n String after pop_back():->"<<str1<<endl;
*/


str2.resize(10);

cout <<"\n String2 after Resize:->" << str2;

cout <<" \n Capacity of string2:->"<<str2.capacity();
/*
str2.shrink_to_fit();

cout <<"\n Capacity of string2 after strink_to_fit Operation:->"<<str2.capacity();
*/

std::string::iterator it1;
std::string::reverse_iterator it2;

cout <<"\n String Using Forward Iteration:->";
for(it1=str1.begin(); it1!=str1.end(); it1++)
{
 cout <<*it1;
}

 cout <<"\n String Using Reverse Iteration:->";
/*
for(it2=str2.begin(); it2!=str1.end(); it2++)
 cout <<*it2 <<endl;

*/

 str2.copy(ch,15,0);

 cout <<"\n After Copy:->" << ch <<endl;


 str3.swap(str2);


 cout <<"String 2 after Swapping:->" << str2 <<endl;
 cout <<"String 3 after Swapping:->" << str3 <<endl;

    return 0;
}
