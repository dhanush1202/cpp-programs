#include<iostream>
#include<deque>
using namespace std;



int main(){
    deque<int> a;
    cout<<"enter size: ";
    int n,d;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d;
        
        a.push_back(d);
    }
    deque<int>::iterator x;
cout<< *a.size()<<endl;


for(x=a.begin();x!=a.end();++x){
    cout<< (*x)<<endl;
}

}