#include<iostream>
using namespace std;
int main()
{
    int total_untreated=0, total_treated=0, days, patients, untreated=0, treated=0,doctor=7;
    cout<<"Enter Number of days you visited Hospital: ";
    cin>>days;
    
    for(int i=1; i<=days; i++)
    {
        if(total_untreated>total_treated && i%3==0)
        {
            doctor=doctor+1;
        }
        cout<<"Number of patients who visited hospital on Day "<<i<<": ";
        cin>>patients;

        if(patients<=doctor)
        {
            treated=patients;
            untreated=0;
        }
        else
        {
            treated=doctor;
            untreated=patients-doctor;
        }
        total_treated=total_treated+treated;
        total_untreated=total_untreated+untreated;       
    }
    cout<<"Treated Patients: "<<total_treated<<endl;
    cout<<"Untreated Patients: "<<total_untreated; 
}