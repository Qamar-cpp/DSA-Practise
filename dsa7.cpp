#include <iostream>
using namespace std;

// Yeh function array me element dhoondega
int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i; // Agar number mil gaya toh uska index return karo
        }
    }
    return -1; // Agar poore array me nahi mila toh -1 return karo
}

int main() {
    int myNumbers[6] = {12, 45, 7, 93, 21, 5};
    int size = 6;
    int target = 21; // Yeh number hume dhoondna hai

    int result = linearSearch(myNumbers, size, target);

    if(result != -1) {
        cout << "Mubarak ho! Number index " << result << " par mil gaya." << endl;
    } else {
        cout << "Afsos! Yeh number array me nahi hai." << endl;
    }
    return 0;
}