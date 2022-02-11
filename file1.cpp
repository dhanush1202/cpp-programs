#include<iostream>
#include<fstream>
using namespace std;


int main(){
    ofstream out("a.txt",ios::ate); 
    string d="dhanush is a ";
    out<<d;
    out.close();
    ifstream in("a.txt");
    string a;
    getline(in,a);
    cout<<a;
    in.seekg(3);
    cout<<in.tellg();
    in.close();

    return 0;
}