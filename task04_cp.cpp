#include<iostream>
using namespace std;
int calcTriangle(int n);
int main()
{
    int n;
    cout<<"Enter the number of triangles: ";
    cin>>n;
    int output=calcTriangle(n);
    cout<<"Dots in the triangle: "<<output;
    
}
int calcTriangle(int n)
{
    int x=0;
    for(int i=1; i<=n; i++)
    {
        x=x+i;
    }
    n=n+x;
    return x;
}