#include<iostream>
using namespace std;
int main(){
    int n,num=0,rem;
    cout<<"enter the number :";
    cin>>n;
    while(n>0){
        rem = n%10; 
        num = num*10+rem;
        n = n/10;

    }
    cout<<"the reverse of number n is : "<<num;
}