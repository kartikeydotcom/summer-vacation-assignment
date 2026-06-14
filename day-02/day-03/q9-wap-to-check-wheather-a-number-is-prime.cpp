#include<iostream>
using namespace std;
int main()
{
    int i,n,k=0;
    cout<<"enter the  number greater then one :";
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
       if( n%i==0)
       {
         k=1;
         break;
       }
        
    }
    if(k==1||n<=1)
    {
        cout<<n<<": is not prime number ";
        
    }
    else
      cout<<n<<": is a prime number :";
      

}
    
