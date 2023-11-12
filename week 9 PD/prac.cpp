#include <iostream>
#include <string>

using namespace std;

int main() {
    // Original string
    string str ;
    cin>>str;

    // Convert each character to integer manually
    for (char c : str) {
        int digit = c - '0';
        cout << "Character: " << c << ", Integer: " << digit << endl;
    }

    return 0;
}
