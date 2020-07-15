

char *removeSpaces(char *str)
{
    int i=0,j=0;

    while(str[i])
    {
        if(str[i] !=' ')
        {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] ='\0';
    return str;
}
/*
Program to Remove space from string
*/

#include <iostream>
using namespace std;


// Driver Code

int main()
{
    char str1[] = "I want to be a Practicing Muslim.";
     cout << removeSpaces(str1) <<endl;

     char str2[] = "I want to Satisfied Allah SWT.";
       cout << removeSpaces(str2) <<endl;

    return 0;
}


