#include<iostream>
using namespace std;
int main(){
    int i,n,m,p=1;
    cout<<"enter the two number";
    cin>>n;
    cin>>m;
    for(i=1;i<=min(n,m);i++){
      if(n%i==0&&m%i==0)
         p=i;
    }
    cout<<p<<": is the gcd if number n and m\n";
    cout<<(n*m)/p<<": is LCM of given two number";
}