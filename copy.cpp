#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        this->a=0;
    }
    number(int d){
        a=d;
    }
    // number(number &qw){
    //     a=qw.a;

    // }
    void display(){
        cout<<"number: "<<a;
    }

};

int main(){
    number f,q,w(5);
    number z1(f);
    f.display();
    q.display();
    z1.display();
    w.display();

    
    return 0;
}