/*
Private data of a class cannot be accessed from outside.
But a friend function is a special function that is allowed to access private data.
*/

#include <iostream>
using namespace std;

class Area {
    int length, width;

public:
    Area(int l, int w) {
        length = l;
        width = w;
    }

    friend void showArea(Area a);
};

void showArea(Area a) {
    cout << "Area = " << a.length * a.width;
}

int main() {

    Area a1(10, 5);

    showArea(a1);

    return 0;
}