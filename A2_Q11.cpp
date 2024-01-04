#include <iostream>
using namespace std;
int main(){
    int i,j,n,k;
    cout<<"enter :";
    cin>>n;
    for(i=1,k=1;i<=n;i++){
         for(j=1;j<=i;j++,k++)
         cout<<k<<" ";
        cout<<endl;
    }
}
