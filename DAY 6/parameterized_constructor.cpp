#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int price;

    Car(string b, int p) {
        brand = b;
        price = p;
    }

    void show() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price;
    }
};

int main() {
    Car c1("BMW", 5000000);
    c1.show();
}