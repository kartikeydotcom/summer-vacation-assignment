#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int start, end, n, temp, digit, sum, count;

    cout<<"Enter start and end: ";
    cin>>start>>end;

    cout<<"Armstrong numbers in range are:\n";

    for(n = start; n <= end; n++){
        temp = n;
        sum = 0;
        count = 0;

        while(temp > 0){
            count++;
            temp /= 10;
        }

        temp = n;
        while(temp > 0){
            digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if(sum == n){
            cout<<n<<" ";
        }
    }

    return 0;
}