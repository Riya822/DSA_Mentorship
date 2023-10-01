#include <iostream>
using namespace std;
int main(){
    int b,x,i,a;
    cout<<"enter range :";
    cin>>x>>b;
    while(x<=b){
        a=0;
        i=1;
        while(i<=x){
            if(x%i==0)
            a++;
        i++;
        }
    if(a==2)
    cout<<x<<" ";
    x++;
    }
}
