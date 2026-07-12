#include <iostream>
using namespace std;

// Humne apna ek function banaya
bool isEven(int num) {
    if (num % 2 == 0) {
        return true; // Agar 2 se pura divide ho jaye toh even hai
    }
    return false; // Warna odd hai
}

int main() {
    int input;
    cout << "Koi bhi number check karne ke liye likhein: ";
    cin >> input;

    if (isEven(input)) {
        cout << input << " ek EVEN number hai." << endl;
    } else {
        cout << input << " ek ODD number hai." << endl;
    }
    return 0;
}