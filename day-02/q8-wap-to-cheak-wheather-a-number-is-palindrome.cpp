#include<iostream>
using namespace std;
int main(){
    int n, rem,k,sum;
    cout<<"enter the number : ";
    cin>>n;
    k = n;
    sum = 0;
    while(n>0){
        rem = n%10;
        sum = sum *10 + rem;
        n = n/10;
    }
    if(sum == k)
      cout<<" entered number is palindrome number";
      else
        cout<<" entered number is not palindrome number";
}