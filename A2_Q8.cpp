#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter a number :";
    cin>>n;
    for(i=n;i>0;i--){
        for(j=0;i>j;j++)
        cout<<"  ";
        cout<<"*";
        cout<<endl;
    }
}
