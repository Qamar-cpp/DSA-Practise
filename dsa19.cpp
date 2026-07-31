#include <iostream>
using namespace std;

// Array ke elements ko ek line mein display karne ke liye
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Index ke zariye element delete karne ka function
void indDeletion(int arr[], int size, int index) {
    // Negative ya out-of-bound index ke liye safety check
    if (index >= size || index < 0) {
        cout << "Invalid index!" << endl;
        return;
    }
    
    // Elements ko left shift karne ka loop
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

int main() {
    int arr[100] = {4, 5, 7, 2, 9, 3};
    int size = 6; // 6 elements hain
    int index;

    cout << "Deletion se pehle array: ";
    display(arr, size);

    // Sirf index ki zaroorat hai deletion ke liye
    cout << "Kis index se element delete karna hai? ";
    cin >> index;

    indDeletion(arr, size, index);

    // Agar valid index tha tabhi size 1 kam karenge
    if (index >= 0 && index < size) {
        size -= 1;
    }

    cout << "Deletion ke baad array: ";
    display(arr, size);

    return 0;
}