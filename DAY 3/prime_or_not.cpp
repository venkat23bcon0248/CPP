#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n <= 1) cout << "Not Prime";
    else {
        int i;
        for(i = 2; i <= n/2; i++)
            if(n % i == 0) break;
        if(i > n/2) cout << "Prime";
        else cout << "Not Prime";
    }
}