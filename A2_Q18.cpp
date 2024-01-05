#include <iostream>
using namespace std; 
int main(){
    int n,i,j,sp;
    cout<<"enter a number :";
    cin>>n;
    for(i=1;i<=n;i++){
        for(sp=1;sp<=i-1;sp++)
        cout << " ";
    int last_col=(n*2-(2*i-1));
    for(int j = 1; j <= last_col; j++){
      if(i==1)
        cout<<"*";
      else if(j==1)
        cout<<"*";
      else if(j==last_col)
        cout<<"*";
      else
        cout<<" ";
    }
    cout<<endl;
  }
    for(i=1;i<=n;i++){
        for(j=0;j<n-i;j++)
            cout<<" ";
        for(j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
}
