#include<iostream>
using namespace std;
bool isPrime(int n);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool output=isPrime(n);
    cout<<output;
}
bool isPrime(int n)
{
    bool value=true;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            value= false;
        }
    }
    return value;
}