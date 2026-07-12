#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Apni Umar (Age) likhein: ";
    cin >> age;
    
    // Agar age 18 ya usse zyada hai
    if (age >= 18) {
        cout << "Aap vote de sakte hain!" << endl;
    } 
    // Agar 18 se kam hai
    else {
        cout << "Aap abhi chote hain, vote nahi de sakte." << endl;
    }
    
    return 0;
}