#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;

    cout << "Enter number of papers: ";
    cin >> n;

    int citations[n];

    cout << "Enter citations: ";

    for(int i = 0; i < n; i++) {
        cin >> citations[i];
    }

    sort(citations, citations + n);

    int answer = 0;

    for(int h = 1; h <= n; h++) {

        int count = 0;

        for(int i = 0; i < n; i++) {

            if(citations[i] >= h) {
                count++;
            }
        }

        if(count >= h) {
            answer = h;
        }

        else {
            break;
        }
    }

    cout << "H-Index = " << answer;

    return 0;
}