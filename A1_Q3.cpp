#include <iostream>
using namespace std;
int main(){
    int n,i=1,a=0;
    cout<<"enter a no :";
    cin>>n;
    while(i<=n){
        if(n%i==0)
        a+=1;
    i++;
    }
    if(a==2)
    cout<<"prime";
    else
    cout<<"not prime";
}
