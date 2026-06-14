#include<iostream>
using namespace std;
int main(){
    int n,m,i,k,p=1;
    cout<<"enter the two number";
    cin>>n;
    cin>>m;
    for(i=1;i<=min(n,m);i++){
      if(n%i==0&&m%i==0)
         p=i;
    }
    cout<<p<<": is the gcd if number n and m";
}