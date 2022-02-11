#include<iostream>
using namespace std;
class test{
    int a,b;
    public:
    test(){
        cin>>a>>b;
        try
        {
            if(a==0)
            throw a;
            else
            cout<<b/a;

        }
        catch(int i)
        {
            cout<<"division by zero is not possible"<<endl;
        }

    }
};
int main(){
    test t;
    
}