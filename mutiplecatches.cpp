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
 
        cout<<"**end of try block**";
    }
    catch(char g)
    {
        cout<<"caught a positive value\n";
    }
    catch(int j)
    {
        cout<<"caught an null value\n";
    }
    catch(double f)
    {
        cout<<"caught a negative value\n";
    }
}


int main()
{
    cout<<"demo"<<endl;
    num(0);
    num(5);
    num(-2);

    return 0;
}