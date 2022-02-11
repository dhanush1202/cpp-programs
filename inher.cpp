#include<iostream>
using namespace std;
class employee{
    string name;
    int age,sal;
    public:
    employee(){
        cout<<"enter name,age,sal: ";
        cin>>name>>age>>sal;
    }
    void printdet(){
        cout<<"name: "<<name<<endl
        <<"age: "<<age<<endl
        <<"sal: "<<sal<<endl;
    }
};

class programmer:private employee{
    public:
    programmer(){
        // employee();
        printdet();
    }
};
class front:private programmer{
    public:
    front(){
        printdet();
    }
};
// front::front(){
//     cout<<"name: "<<name<<endl
//         <<"age: "<<age<<endl
//         <<"sal: "<<sal<<endl;

int main(){
    // programmer a;
    front d;
    // a.readdet();
    // a.printdet();
    return 0;
}