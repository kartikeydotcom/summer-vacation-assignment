#include<iostream>
using namespace std;

int main(){
    int n, a=0, b=1, c,i;

    cout<<"Enter n: ";
    cin>>n;

    if(n==0){
        cout<<"Fibonacci term is: 0";
    }
    else if(n==1){
        cout<<"Fibonacci term is: 1";
    }
    else{
        for( i=2; i<=n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        cout<<"Fibonacci term is: "<<b;
    }

    return 0;
}