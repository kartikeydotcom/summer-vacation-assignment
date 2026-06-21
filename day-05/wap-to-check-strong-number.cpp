#include<iostream>
using namespace std;

int main(){
    int n, temp, digit, sum = 0, fact;

    cout<<"Enter a number: ";
    cin>>n;

    temp = n;

    while(n > 0){
        digit = n % 10;
        fact = 1;
        for(int i = 1; i <= digit; i++){
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == temp)
        cout<<temp <<" is "<<"Strong number";
    else
        cout<<"Not a strong number";

    return 0;
}