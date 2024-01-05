#include <iostream>
using namespace std; 
int main(){
    int n,i,j,sp,st,val;
    cout<<"enter a number :";
    cin>>n;
    sp=2*n-3;
    st=1;
    for (i=1;i<=n;i++){
        val=1;
        for (j=1;j<=st;j++){
            cout<<(val)<<"\t";
            val++;
        }
        for(j=1;j<=sp;j++){
            cout<<("\t");
        }
        val=i<n?val-1:val-2;
        st=i<n?st:st-1;
        for(j=1;j<=st;j++){
            cout<<(val)<<"\t";
            val--;
        }
        st++;
        sp-=2;
        cout<<endl;
    }
}
