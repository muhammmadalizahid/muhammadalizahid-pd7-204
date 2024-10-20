#include<iostream>
using namespace std;
void printStars();
main()
{
    printStars();   
}
void printStars()
{
    for(int i=14; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}