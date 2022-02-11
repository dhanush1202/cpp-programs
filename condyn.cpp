#include<iostream>
using namespace std;
class interestrate{
    int principal,year;
    float intrate,retval;
    public:
        interestrate(){

        }
        interestrate(int p,int y,int r){
            principal=p;
            year=y;
            intrate=r;
            retval=p;
            for (int i = 0; i < y; i++)
            {
                retval=retval*(1+float(r)/100);
            }
            std::cout << "return value: " << retval;
            
        }
        
        interestrate(int p,int y,float r){
            principal=p;
            year=y;
            intrate=r;
            retval=p;
            for (int i = 0; i < y; i++)
            {
                retval=retval*(1+r);
            }
            std::cout << "return value: " << retval;
            
        }
        
};

int main(){
    interestrate b1,b2;
    int p;
    int y;
    int r;float R;
    cout << "inpercent: ";
    cin>>p>>y>>r;
    b1=interestrate(p,y,r);
    cout << "in decimal: ";
    cin>>p>>y>>R;
    b1=interestrate(p,y,R);
    return 0;
}