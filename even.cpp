#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    try
    {
        if(a%2!=0)
        throw a;
        else
        cout<<a<<" is even";
    }
    catch(int i){
    cout<<a<<" is odd";
    
    }
    }