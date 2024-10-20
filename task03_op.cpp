#include<iostream>
using namespace std;
void numAmplify(int n);
int main()
{
    int n;
    cout<<"Enter the number you want to amplify: ";
    cin>>n;
    numAmplify(n);
} 
void numAmplify(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(i%4==0)
        {
            int num=i*10;
            cout<<num<<", ";
        }
        else
        {
           cout<<i<<", ";
        }
    }
}
 