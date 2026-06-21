#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter number of digits: ";
    cin >> n;

    vector<int> digits(n);

    cout << "Enter digits: ";
    for(int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    for(int i = digits.size() - 1; i >= 0; i--) {

        if(digits[i] < 9) {
            digits[i] = digits[i] + 1;

            cout << "Result: ";
            for(int j = 0; j < digits.size(); j++) {
                cout << digits[j] << " ";
            }

            return 0;
        }

        digits[i] = 0;
    }

    digits.insert(digits.begin(), 1);

    cout << "Result: ";
    for(int i = 0; i < digits.size(); i++) {
        cout << digits[i] << " ";
    }

    return 0;
}