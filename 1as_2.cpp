#include <iostream>
using namespace std;

int main()
{
    int n, energy;
    int total = 0;
    int count = 0;
    bool positive = true;

    cout << "Enter the number of energy crystals: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << "Enter energy of crystal " << i << ": ";
        cin >> energy;

        total = total + energy;

        if(energy > 20)
        {
            count++;
        }

        if(energy <= 0)
        {
            positive = false;
        }
    }

    cout << "Total Energy: " << total << endl;

    if(total >= 100 && count >= 2 && positive)
        cout << "Shield Activated";
    else
        cout << "Shield Not Activated";

    return 0;
}