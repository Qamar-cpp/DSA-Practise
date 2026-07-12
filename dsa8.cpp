#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;         // Pehla pointer shuruat me
    int end = size - 1;    // Doosra pointer aakhri element par

    while(start < end) {
        // Dono pointers ki values ko aapas me badal (swap) do
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Pointers ko aage peeche karo
        start++;
        end--;
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;

    reverseArray(arr, size);

    cout << "Ulta (Reversed) karne ke baad array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}