// An electricity board charges the following rates to domestic users to 
// discourage large consumption of energy. 
// For the first 100 units: - 60 P per unit 
// For the next 200 units: -80 P per unit 
// Beyond 300 units: -90 P per unit 
// All users are charged a minimum of Rs 50 if the total amount is more than 
// Rs 300 then an additional surcharge of 15% is added. 
// Implement a C++ program to read the names of users and number of units 
// consumed and display the charges with names



#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int unit;
    float bill;
    string name;
    cout<<"enter the name of user";
    getline(cin,name);
    cout<<"enter the unit";
    cin>>unit;
    if(unit<=100)
    {
        bill=unit*.60;
    }
    else if((unit>100) && (unit<=300))
    {
        bill=(unit*.60)+(unit-100)*.80;
    }
    else
    {
        bill=(unit*.60)+(unit*.80)+(unit-300)*90;
    }

    if(bill<50)
    {
        bill=50;
    }
    if(bill>300)
    {
        bill=bill+(bill*0.15);
    }

    cout<<"\nNAME: "<<name;
    cout<<"\nUNIT: "<<unit;
    cout<<"\nBILL: "<<bill;

return 0;
}