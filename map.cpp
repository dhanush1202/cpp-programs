#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> a;
    int n;
    cout<<"enter size: ";
    cin>>n;
    cout<<"enter key,value pairs: ";
    int k,v;
    for(int i=0;i<n;i++){
        
        cin>>k>>v;
        a.insert(pair<int,int>(k,v));
    }
    map<int,int>::iterator i;
    for(i=a.begin();i!=a.end();i++){
        cout<<i->first<<"\t"<<i->second<<endl;

    }
    cout<<a.lower_bound(6)->first<<endl<<a.upper_bound(6)->first;

}