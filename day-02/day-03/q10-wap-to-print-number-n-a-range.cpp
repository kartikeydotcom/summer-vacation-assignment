#include<iostream>
using namespace std;
int main(){
    int start,end,i;
    cout<<"enter the starting range :";
    cin>>start;
    cout<<"enter the ending range :";
    cin>>end;
    cout<<"the range of given number are:\n";
    for(i=start;i<=end;i++){
        cout<<i<<" ";
    }
}