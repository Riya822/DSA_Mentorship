#include <iostream>
using namespace std; 
int patt(int n, int k){
    int i,res=1;
    if(k>n-k)
        k=n-k;
    for(i=0;i<k;++i){
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
int main(){
    int n,l,i;
    cout<<"enter a number :";
    cin>>n;
    for(l=0;l<n;l++){
        for(i=0;i<=l;i++)
            cout<<" "<<patt(l,i);
        cout<<endl;
    }
}
