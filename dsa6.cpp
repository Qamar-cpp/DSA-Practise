#include <iostream>
using namespace std;

int main() {
    // 5 size ka ek array banaya aur usme numbers rakh diye
    int marks[5] = {85, 92, 78, 65, 99};

    cout << "Array ke andar ke saare numbers yeh hain:" << endl;

    // Array ke saare elements ko loop ke zariye print karna
    for (int i = 0; i < 5; i++) {
        cout << "Index " << i << " par value hai: " << marks[i] << endl;
    }
    return 0;
}