#include <iostream>
#include <iomanip>
using namespace std;
void calculate(int);
int main() 
{
    int items;
    cout<<"Enter the count of Cargo for transportation: ";
    cin>>items;
    calculate(items);

}
void calculate(int items)
{
    int tweight=0, minibusw=0, truckw=0, trainw=0, fcost=0;

    for (int i=0; i<items; i++) 
    {
        int weight;
        cout<<"Enter the tonnage of Cargo "<<(i + 1)<<": ";
        cin>>weight;

        tweight= tweight+weight;

        if(weight<=3) 
        {
            fcost=fcost+(weight*200); 
            minibusw=minibusw+weight;
        } 
        else if (weight <= 11) 
        {
            fcost=fcost+(weight * 175); 
            truckw=truckw+weight;
        } 
        else 
        {
            fcost=fcost+(weight * 120); 
            trainw=trainw+weight;
        }
    }

     
    int minibusper=(minibusw*10000)/tweight; 
    int truckper=(truckw*10000)/tweight;
    int trainper=(trainw*10000)/tweight;
    int avgppton=(fcost*100)/tweight;

    cout<<fixed<<setprecision(2);
    cout<<avgppton/100.0 <<endl;
    cout<<minibusper/100.0<<"%"<<endl;
    cout<<truckper/100.0<<"%"<<endl;
    cout<<trainper/100.0<<"%"<<endl;
}


