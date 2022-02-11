#include<iostream>
using namespace std;
class student{
protected:
static int roll;
public:
student(){
    roll++;
    
}
};
int student::roll;
class exam{
    
    protected:
    int math,pys,chem;
    public:
exam(){
    cout<<"enter marks of student "<<endl;
    cin>>math>>pys>>chem;

}
};
class total:public exam,public student{
    int total1;
    public:
    total(){
        total1=math+pys+chem;
        cout<<"total marks of student of roll"<<roll<<"\t"<<total1<<endl;
    }
};
int main(){
    total x,y,z;
    return 0;
}