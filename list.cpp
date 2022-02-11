#include<iostream>
#include<list>
using namespace std;


int main(){
    list<int> l;
    for(int i=0;i<5;i++)
    l.push_back(i+6);
    cout<<"list: ";
    for(auto i=l.begin();i!=l.end();i++)
    cout<<*i<<" ";
    cout<<endl;
    cout<<"reversed: ";
    l.reverse();
    for(auto i=l.begin();i!=l.end();i++)
    cout<<*i<<" ";
    cout<<endl;
    
    for(int i=0;i<5;i++)
    l.push_back(i);
    l.sort();
    l.sort();
    for(auto i=l.begin();i!=l.end();i++)
    cout<<*i<<" ";

    return 0;
}