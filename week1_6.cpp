

#include <iostream>
#include <string>
using namespace std;

class Hotel {
private:
    string name;
    int roomNumber, days;
    float tariff, totalAmount;

public:
    void checkIn() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter room number: ";
        cin >> roomNumber;

        cout << "Enter tariff per day: ";
        cin >> tariff;

        cout << "Enter number of days: ";
        cin >> days;

        totalAmount = tariff * days;

        if (totalAmount > 10000) {
            totalAmount = totalAmount * 1.05; 
        }
    }

    void checkOut() {
        cout << "\n--- Hotel Bill ---\n";
        cout << "Name: " << name << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Tariff: " << tariff << endl;
        cout << "Days: " << days << endl;
        cout << "Total Amount: " << totalAmount << endl;
    }
};

int main() {
    Hotel h1;
    h1.checkIn();
    h1.checkOut();

    return 0;
}
