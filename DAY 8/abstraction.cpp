#include <iostream>
using namespace std;

class Atm {
private:
    int balance;

public:
    Atm() {
        balance = 100000;
    }

    void withdraw(int amount) {
        if(amount > balance) {
            cout << "Insufficient Balance" << endl;
        }
        else {
            balance = balance - amount;
            cout << "Successfully Withdrawn" << endl;
        }
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    Atm a1;

    a1.showBalance();

    a1.withdraw(5000);

    a1.showBalance();

    return 0;
}