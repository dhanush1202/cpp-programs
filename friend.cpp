#include<iostream>
using namespace std;

class major;

class minor{
    public:
    void printdata(major);
    void data(major,major);
};
class major{
    int a,b;
    public:
    void read(){
        cin>>a>>b;
    }
    void print(){
        cout<<a<<endl<<b;
    }
    friend minor;
};
void minor::printdata(major d){
        cout<<d.a<<"\t"<<d.b;
    }
void minor::data(major q,major w){
    cout<<endl<<q.a+w.a;
    cout<<endl<<q.b+w.b;
}


int main(){
    major d,d1;
    d.read();
    d1.read();
    minor f;
    f.printdata(d);
    f.data(d,d1);
    
    return 0;
}