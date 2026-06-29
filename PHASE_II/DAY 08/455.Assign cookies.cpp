#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n, m;

    cout << "Enter number of children: ";
    cin >> n;

    vector<int> greed(n);

    cout << "Enter greed factors: ";
    for(int i = 0; i < n; i++) {
        cin >> greed[i];
    }


    cout << "Enter number of cookies: ";
    cin >> m;

    vector<int> cookies(m);

    cout << "Enter cookie sizes: ";
    for(int i = 0; i < m; i++) {
        cin >> cookies[i];
    }


    sort(greed.begin(), greed.end());
    sort(cookies.begin(), cookies.end());


    int child = 0;
    int cookie = 0;


    while(child < greed.size() && cookie < cookies.size()) {

        if(cookies[cookie] >= greed[child]) {

            child++;
            cookie++;
        }

        else {

            cookie++;
        }
    }


    cout << "Maximum satisfied children = " << child << endl;

    return 0;
}