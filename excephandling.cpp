#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b;
    try
    {
        if(a==0)
        throw a;
        else
        c=b/a;
    }
    catch(int i){
        c=b/1;
    }
    cout<<a<<endl<<b<<endl<<c;
}