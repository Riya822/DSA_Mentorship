#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter a number :";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=n;j>i;j--)
        cout<<"*"<<" ";
        cout<<endl;
    }
}
