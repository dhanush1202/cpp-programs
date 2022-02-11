#include<iostream>
#include<fstream>
using namespace std;
class test{
    string name;
    int age;
    public:
    void data();
    void print();
};
void test::data(){
    cout<<"enter name and age: ";
    cin>>name>>age;
}
void test::print(){
    cout<<"name: "<<name<<endl
    <<"age: "<<age<<endl;
}


int main(){
    test s;
    fstream f;
    f.open("a.txt",ios::out);
    s.data();
    f.write((char*)&s,sizeof(s));
    f.close();
    f.open("a.txt",ios::in);
    f.read((char *)&s,sizeof(s));
    s.print();
    f.close();
    
    return 0;
}