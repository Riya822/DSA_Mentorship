#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter a number :";
    cin>>n;
    for(i=n;i>0;i--){
        for(j=n;j>i;j--)
        cout<<" ";
        for(j=0;j<i;j++)
        cout<<"*";
        cout<<endl;
    }
}
