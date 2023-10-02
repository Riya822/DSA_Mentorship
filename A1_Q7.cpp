#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,i=0;
    int p=1;
    cout<<"enter a value :";
    cin>>n;
    while(n > 0){
        int dig = n % 10;
        n = n / 10;
        i += p * pow(10, dig - 1);
        p++;
    }
    cout<<"inverse of the no:"<<i;  
}
