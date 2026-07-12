#include <iostream>
#include <climits> // INT_MIN aur INT_MAX ke liye
using namespace std;

int getMax(int arr[], int size) {
    int maxSubSeBada = INT_MIN; // Sabse choti mumkin value se shuru kiya

    for(int i = 0; i < size; i++) {
        if(arr[i] > maxSubSeBada) {
            maxSubSeBada = arr[i]; // Agar naya bada number mile toh update karo
        }
    }
    return maxSubSeBada;
}

int main() {
    int arr[7] = {4, 12, 8, 25, 1, 19, 6};
    int size = 7;

    cout << "Array ka sabse bada number hai: " << getMax(arr, size) << endl;

    return 0;
}