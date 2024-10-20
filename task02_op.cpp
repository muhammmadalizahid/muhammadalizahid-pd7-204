#include<iostream>
using namespace std;
void printStarsupper(int);
void printStarlower(int);
int main()
{
    int n;
    cout<<"Entered the desired number of rows: ";
    cin>>n;
    printStarsupper(n);
    printStarlower(n);
}
void printStarsupper(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int space=n-i; space>=1; space--)
        {
           cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
           cout<<"*";
        }
        cout<<endl;
    }
}
void printStarlower(int n)
{
    for(int i=n-1; i>=1; i--)
    {
        for(int spaces=n-i; spaces>=1; spaces--)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
}