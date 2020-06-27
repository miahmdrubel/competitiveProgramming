
#include <iostream>
using namespace std;


int main()
{

int n;
int arr[10];

cout << "How many numbers:->";
 cin >> n;

 cout << endl;

  for(int i=0; i<n; i++)
  {
      cin >> arr[i];
  }


  for(int j=n-1; j>=0; j--)
  {
      cout << arr[j] <<" ";
  }



    return 0;
}

