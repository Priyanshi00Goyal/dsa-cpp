#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string str;

    cin >> str;

    cout << "Characters:\n";
    for (char ch:str) {
        cout << ch << endl;
    }

    reverse(str.begin(), str.end());

    cout << "\nReversed String: " << str;

    return 0;
}