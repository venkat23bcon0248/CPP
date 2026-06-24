#include <iostream>
using namespace std;

int main() {

    int mat[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int sum = 0;
    int n = 3;

    for(int i = 0; i < n; i++) {

        sum = sum + mat[i][i];

        if(i != n - 1 - i) {
            sum = sum + mat[i][n - 1 - i];
        }
    }

    cout << "Diagonal Sum = " << sum;

    return 0;
}