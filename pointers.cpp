#include<iostream>
using namespace std;

class a{
    int n;
    int *ad;
    public:
    a(){
        cin>>n;
        ad=new int[n];
        for(int i=0;i<n;i++){
            cin>>*(ad+i);
        }
    }
    ~a(){
        cout<<"elements: ";
        for(int i=0;i<n;i++){
            cout<<this->ad[i]<<"\t";
        }
    }
};

int main(){
    a q;

    
    return 0;
}