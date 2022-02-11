#include<iostream>
using namespace std;
class basse{
    int a,b,c,d;
    public:
    basse(){
a=0;b=0;c=0;d=0;
    }

    basse(int ad){
        a=ad;
        b=0;c=0;d=0;
    }
    basse(int ad,int bd){
        a=ad;
        b=bd;c=0;d=0;
    }
    basse(int ad,int bd,int cd){
        a=ad;
        b=bd;c=cd;d=0;
    }
    basse(int ad,int bd,int cd,int dd){
        a=ad;
        b=bd;c=cd;d=dd;
    }
    void retval(){
        cout<<"a: "<<a<<"\t"
        <<"b: "<<b<<"\t"
        <<"c: "<<c<<"\t"
        <<"d: "<<d<<endl;
    }
};

int main(){
    basse q,w,e,r;
// cout<<"enter the number of inputs: ";
// int n;
// cin>>n;
// if(n==1){
    q=basse(1);
    w=basse(1,2);
    e=basse(1,2,3);
    r=basse(1,2,3,4);
    q.retval();
    w.retval();
    e.retval();
    r.retval();
// }
    
    return 0;
}