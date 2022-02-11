#include<fstream>
#include<iostream>
using namespace std;
int main(){
    char d[100]="welcome";
    fstream file;
    file.open("a.txt",ios::in);
    file<<d;
    file.close();
    
}