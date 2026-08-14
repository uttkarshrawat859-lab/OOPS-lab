#include <iostream>
using namespace std;

int main()
{
    int a, b, result = 0;

    cout << "Enter 1st numbers: ";
    cin >> a;
    cout << "Enter 2nd numbers: ";
    cin >> b;

    for(int i = 1; i <= b; i++)
    {
        result = result + a;
    }

    cout << "Product = " << result;

    return 0;
}