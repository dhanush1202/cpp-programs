#include<iostream>
using namespace std;

class a

{
private:
    /* data */
    static int s;
public:
    a(){
        s++;
    }
    static void f(){
        
        cout<<s;
    }
};
int a::s;


int main(){
    a d[3];
    a::f();
    return 0;
}