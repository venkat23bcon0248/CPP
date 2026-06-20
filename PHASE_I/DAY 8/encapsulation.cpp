#include <iostream>
using namespace std;

class Atm {
private:
    int balance;

public:
    void setBalance(int b) {
        balance = b;
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

    int getBalance() {
        return balance;
    }
};

int main() {

    Atm a1;

    a1.setBalance(100000);

    a1.withdraw(5000);

    cout << "Balance: " << a1.getBalance() << endl;

    return 0;
}