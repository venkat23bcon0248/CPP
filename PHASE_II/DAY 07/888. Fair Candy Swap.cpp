#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int m, n;
    cout << "Enter the number of candies Alice has: ";
    cin >> m;
    cout << "Enter the number of candies Bob has: ";
    cin >> n;
    int alice_candies[m];
    int bob_candies[n];
    cout << "Enter Alice's candies: ";
    for(int i = 0; i < m; i++) {
        cin >> alice_candies[i];
    }
    cout << "Enter Bob's candies: ";
    for(int i = 0; i < n; i++) {
        cin >> bob_candies[i];
    }
    int sum_alice = 0, sum_bob = 0;
    for(int i = 0; i < m; i++) {
        sum_alice += alice_candies[i];
    }
    for(int i = 0; i < n; i++) {
        sum_bob += bob_candies[i];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int new_sum_alice = sum_alice - alice_candies[i] + bob_candies[j];
            int new_sum_bob = sum_bob - bob_candies[j] + alice_candies[i];
            if (new_sum_alice == new_sum_bob) {
                cout << "Alice can give candy " << alice_candies[i] << " to Bob and receive candy " << bob_candies[j] << " from Bob." << endl;
    
            }
        }
    }
    return 0;
}