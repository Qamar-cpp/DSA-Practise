#include <iostream>
using namespace std;

int main() {
    int n = 4; // Kitni rows aur columns chahiye

    // Outer loop: Rows ke liye
    for (int i = 0; i < n; i++) {
        // Inner loop: Columns ke liye
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl; // Har row ke baad nayi line
    }
    return 0;
}