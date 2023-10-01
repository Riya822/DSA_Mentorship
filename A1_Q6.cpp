#include <iostream>
using namespace std;
int main(){
  int n,d;
  cout<<"enter a number:";
  cin>>n;
  while(n>0){
    d=n%10;
    n=n/10;
    cout<<d<<"\n";
  }
}
