#include<iostream>
using namespace std;
bool isPrime(int n);
int primonial(int n);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int output=primonial(n);
    cout<<output;
    return 0;
}
bool isPrime(int n)
{
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int primonial(int n)
{
    int product=1, count=0, i=2;
    while(count<n)
    {
        if(isPrime(i))
        {
            product=product*i;
            count++;
        }
     i++;   
    }
    
    return product;
}