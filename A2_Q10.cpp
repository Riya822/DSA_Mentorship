#include <iostream>
using namespace std;
int main(){
    int i,j,n,a,x;
    cout<<"enter a number :";
    cin>>n;
    a=n/2;
    x=-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=a;j++){
            cout<<(" ");
        }
        cout<<("* ");
        for(j=1;j<=x;j++){
            cout<<(" ");
        }
        if(i>1 && i<n){
            cout<<("* ");
        }
        cout<<endl;
        if(i<=n/2){
            a--;
            x+=2;
        }else{
            a++;
            x-=2;
        }
    }
}
