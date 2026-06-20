#include <iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int runs;

    Cricketer(string n, int r) {
        name = n;
        runs = r;
    }

    Cricketer(Cricketer &c) {
        name = c.name;
        runs = c.runs;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};

int main() {

    Cricketer c1("Virat Kohli", 12000);

    Cricketer c2 = c1;

    c2.show();

    return 0;
}