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

class Cricketer : public Player {
public:
    void showCricketer() {
        cout << "Cricketer Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};

class Footballer : public Player {
public:
    void showFootballer() {
        cout << "Footballer Name: " << name << endl;
        cout << "Goals: " << runs << endl;
    }
};

int main() {

    Cricketer c1;
    c1.setPlayer("Virat Kohli", 12000);
    c1.showCricketer();

    cout << endl;

    Footballer f1;
    f1.setPlayer("Messi", 850);
    f1.showFootballer();

    return 0;
}