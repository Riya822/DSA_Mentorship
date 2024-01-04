#include <iostream>
using namespace std; 
int main(){
    int n,i,j;
    cout<<"enter a number :";
    cin>>n;
    int stars=1;
    int spaces=n/2;
    int x=1;
    for(i=1;i<=n;i++){
        int val=x;
        for(j=1;j<=spaces;j++){
            cout<<(" ");
        }
        for(j=1;j<=stars;j++){
            cout<<val<<" ";
            if(j<=stars/2)
                val++;
            else
                val--;
        }
        cout<<endl;
        if (i<=n/2){
            x++;
            stars+=2;
            spaces--;
        }
        else{
            x--;
            stars-=2;
            spaces++;
        }
    }
}
