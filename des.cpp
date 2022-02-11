#include<iostream>
using namespace std;
class des{
    static int a;
    public:
    des(){
        a++;
        cout << "con" <<a<<endl;
    }
    ~des(){
        cout << "des" <<a<<endl;
        a--;
    }
};
int des::a=0;
int main(){
    des d[10];
    des a;
    return 0;
}