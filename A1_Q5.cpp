#include <iostream>
using namespace std;
int main(){
    int x,count=0;
    cout<<"enter a number :";
    cin>>x;
    while(x>0){
        x=x/10;
        count++;
    }
    cout<<"no of digits in the number :"<<count;
}
