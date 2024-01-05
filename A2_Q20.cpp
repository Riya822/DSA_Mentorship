#include <iostream>
using namespace std; 
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    int i,j,counter=n/2; 
    for(i=0;i<n;i++) { 
        cout<<"*"; 
        for(j=0;j<=n;j++){ 
            if(j==n) 
                cout<<"*"; 
            else if((i>=n/2) && (j==counter || j==n-counter-1)) 
                cout<<"*"; 
            else
                cout<<" "; 
        } 
        if(i>=n/2){ 
            counter++; 
        } 
        cout<<endl; 
    } 
}
