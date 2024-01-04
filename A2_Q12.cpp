#include <iostream>
using namespace std; 
void fib(int f[], int N){
    f[1]=0;
    f[2]=1;
    for(int i=3;i<=N;i++)
        f[i]=f[i-1]+f[i-2];
}
int main(){
    int n,x,N,i,j;
    cout<<"enter a number :";
    cin>>n;
    N=n*(n+1)/2;
    int f[N+1];
    fib(f,N);
    x=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            cout<<f[x++]<<" ";
        cout<<endl;
    }
}
