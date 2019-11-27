/*Thanks to everyone who likes my code Decimal to binary.
I am feeling very motivated when I read your comments,suggestion ,feedback and queries.
And it is my first code - #1 on trending,which give me great pleasure.*/


#include<iostream>
using namespace std;

void binary(int num)
{
    int rem;


    if (num <= 1)
    {
        cout << num;
        return;
    }
    rem = num % 2;
    binary(num / 2);
    cout << rem;
}

int main()
{
    int dec, bin;
    cout << "Enter the number : ";
    cin >> dec;

    if (dec < 0)
        cout << dec << " is not a positive integer." << endl;
    else
    {
        cout << "The binary form of " << dec << " is ";
        binary(dec);
        cout << endl;
    }
    return 0;
}


