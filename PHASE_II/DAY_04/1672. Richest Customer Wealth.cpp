#include <iostream>
using namespace std;

int main() {

    int accounts[3][2] = {
        {1, 5},
        {7, 3},
        {3, 5}
    };

    int maxWealth = 0;

    for(int i = 0; i < 3; i++) {

        int sum = 0;

        for(int j = 0; j < 2; j++) {

            sum = sum + accounts[i][j];

        }

        if(sum > maxWealth) {

            maxWealth = sum;

        }
    }

    cout << "Richest Customer Wealth = " << maxWealth;

    return 0;
}