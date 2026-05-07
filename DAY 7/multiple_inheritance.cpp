#include <iostream>
using namespace std;

class Player {
public:
    string name;
    int runs;

    void setPlayer(string n, int r) {
        name = n;
        runs = r;
    }
};

class Country {
public:
    string country;

    void setCountry(string c) {
        country = c;
    }
};

class Cricketer : public Player, public Country {
public:
    void show() {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "Country: " << country << endl;
    }
};

int main() {
    Cricketer c1;

    c1.setPlayer("Virat Kohli", 12000);
    c1.setCountry("India");

    c1.show();

    return 0;
}