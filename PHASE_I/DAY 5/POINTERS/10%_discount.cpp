#include <iostream>
using namespace std;

void applyDiscount(float &bill) {
    bill = bill - (bill * 0.10);
}

int main() {
    float bill;
    cout << "Enter bill amount: ";
    cin >> bill;

    applyDiscount(bill);

    cout << "🎉 You got 10% discount!\n";
    cout << "Final amount to pay: " << bill;
}