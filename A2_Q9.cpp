#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter a number :";
    cin>>n;
    for(i=1;i<=n;i++){
         for(intj=1;j<=n;j++){
            if(j==i||j==(n+1-i))
                cout<<"*";
            else
                cout<<" ";
        }
         cout<<endl;
    }
}
