
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,small,Capital,T;
    char s1[100];


    cout << "How many Case You Want to Test:->";
     cin >> T;

           small = 0,Capital = 0;


     for(int j=0; j<T; j++)
     {


      cout << " Enter  Word :->";
      gets(s1);

   for(i=0; s1[i] != NULL; i++)
   {

        if(s1[i] >= 'A' && s1[i]<='Z')
        {
           Capital++;
        }

        if(s1[i] >= 'a' && s1[i]<='z')
        {
          small++;
        }


   }

    cout << "\number of Capital Letters:-> " << Capital <<endl;

    cout << "Number of Small Letters:-> " << small <<endl;

     }

    return 0;
}
