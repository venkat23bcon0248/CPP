#include <iostream>
using namespace std;

class Player {
public:
    string name;
    int runs;

    void setName(string n) {
        name = n;
    }

    void setRuns(int r) {
        runs = r;
    }

    virtual void show() {
        cout << "Player Details" << endl;
    }
};

class Cricketer : public Player {
public:
    string country;

    Cricketer(string s) {
        country = s;
    }

    void show() override {
        cout << "Virtual Function Example" << endl;
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "Country: " << country << endl;
    }
};

int main() {

    int runs;
    cin >> runs;

    Cricketer c1("India");

    c1.setName("Virat Kohli");
    c1.setRuns(runs);

    Player *p;
    p = &c1;

    p->show();

    return 0;
}