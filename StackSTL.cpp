#include<bits/stdc++.h>
using namespace std;

int main()
{
   //Declaring a  stack
    stack <int> st;
    cout<<"Putting Elements in Stack:->\n";

     st.push(1001);
      st.push(1002);
       st.push(1003);
        st.push(1004);

    cout<<"Size of the Stack:"<< st.size()<<endl;
    cout<<"Popping Elements from the stack:->\n";

    while(!st.empty())
    {
        cout<< st.top() <<' ';
        st.pop(); //Pop the top of the Stack.
    }


    return 0;
}
