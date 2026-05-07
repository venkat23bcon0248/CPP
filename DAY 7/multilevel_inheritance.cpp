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
};

class Cricketer : public Player {
public:
    string country;

    void setCountry(string c) {
        country = c;
    }
};

class Captain : public Cricketer {
public:
    void show() {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "Country: " << country << endl;
    }
};

int main() {
    int runs;
    cin >> runs;

    Captain c1;

    c1.setName("Virat Kohli");
    c1.setRuns(runs);
    c1.setCountry("India");

    c1.show();

    return 0;
}