#include <iostream>
#include <string>
using namespace std;

int main()
{
    string code;
    bool upper = false;
    bool lower = false;
    bool digit = false;
    cout<<"enter the secret code:";
    cin >> code;

    for(int i = 0; i < code.length(); i++)
    {
        if(code[i] >= 'A' && code[i] <= 'Z')
            upper = true;

        if(code[i] >= 'a' && code[i] <= 'z')
            lower = true;

        if(code[i] >= '0' && code[i] <= '9')
            digit = true;
    }

    if(code.length() >= 8 && upper && lower && digit)
        cout << "Strong Code";
    else
        cout << "Weak Code";

    return 0;
}