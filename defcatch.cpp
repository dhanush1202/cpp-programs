#include <iostream>

using namespace std;
void num(int k)
{
    try
    {
        if(k==0)throw k;
        else
           if(k>0)throw 'P';
        else
           if(k<0)throw 1.0;
    }
    catch(...)
    {
        cout<<"caught"<<endl;
    }
}

int main()
{
    num(0);
    num(4);
    num(-3);

    return 0;
}