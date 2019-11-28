#include<exception>

void myterminate()
{
    cout<<"Inside My terminate.\n";

}

int main()
{
    int n;
    set_terminate(myterminate);
    try
    {
       cin>> n;
       if(n==0) throw 1;
       else throw 1.0;
    }

    catch(int m)
    {
        cout<<"Exception for int"<< m <<endl;
    }
    cout<<"end.\n";




    return 0;
}
