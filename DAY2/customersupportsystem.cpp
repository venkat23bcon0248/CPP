#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Press 1 for Support\n";
    cout << "Press 2 for Billing\n";
    cout << "Press 3 for Technical Error\n";
    cout << "Press 4 to Report an Issue\n";

    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You selected Support";
            break;
        case 2:
            cout << "You selected Billing";
            break;
        case 3:
            cout << "You selected Technical Error";
            break;
        case 4:
            cout << "You selected Report an Issue";
            break;
        default:
            cout << "Invalid choice";
    }
}