#include<iostream>
using namespace std;

class base1{
    int a;
    public:
    base1(){
        cout<<"enter value of a: ";
        cin>>a;
        cout<<"base1"<<endl;
    }
};
class base2{
    int b;
    public:
    base2(){
        cout<<"enter value of a: ";
        cin>>b;
        cout<<"base2"<<endl;

    }
};
class der:public base1,virtual public base2{
    public:
    der(){

    }
};
int main(){
    der q;
    return 0;
}