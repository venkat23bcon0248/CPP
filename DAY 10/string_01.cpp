#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string str1 = "hello";
    string str2 = "Jecrc";

    cout << str1 << " " << str2 << endl;

    int n = str1.length();
    cout << "Length of str1: " << n << endl;

    cout << "After appending string is: "
         << str1.append("Student") << endl;

    cout << "Is string empty: "
         << str1.empty() << endl;

    cout << "After concatenating string is: "
         << str1 + " Bachho " << endl;

    cout << "After concatenating string is 2: "
         << str1 << endl;

    str2.push_back('u');
    cout << "After pushing back string is: "
         << str2 << endl;

    str2.pop_back();
    cout << "After popping back string is: "
         << str2 << endl;

    int index = str1.find("ello");
    cout << "Index of substring 'ello' in str1: "
         << index << endl;

    char ch = str1.at(1);
    cout << "Character at index 1 in str1: "
         << ch << endl;

    str1.swap(str2);
    cout << "After swapping, str1: "
         << str1 << ", str2: " << str2 << endl;

    string substr = str2.substr(5, 6);
    cout << "Substring of str2 from index 5 with length 6: " << substr << endl;
    
    string str3;
    getline(cin, str3);
    cout << "You entered: " << str3 << endl;    

    return 0;
}