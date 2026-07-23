#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    // ---------------- MAX-HEAP ----------------
    // Isme sabse bada number hamesha top par hoga
    priority_queue<int> maxHeap;

    // Insert - O(log n)
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);

    // Get Top - O(1)
cout << "Max-Heap ka Top (Sabse Bada): " << maxHeap.top() << endl; // Output: 30

    // Pop - O(log n)
    maxHeap.pop(); // 30 nikal gaya, ab 20 top par aayega
cout << "Pop ke baad Max-Heap ka Top: " << maxHeap.top() << endl; // Output: 20


cout << "----------------------" << endl;


    // ---------------- MIN-HEAP ----------------
    // Isme sabse chhota number hamesha top par hoga
priority_queue<int, vector<int>,greater<int>> minHeap;

    // Insert - O(log n)
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);

    // Get Top - O(1)
            cout << "Min-Heap ka Top (Sabse Chhota): " << minHeap.top() <<endl; // Output: 10

    // Pop - O(log n)
    minHeap.pop(); // 10 nikal gaya, ab 20 top par aayega
            cout << "Pop ke baad Min-Heap ka Top: " << minHeap.top() <<endl; // Output: 20

    return 0;
}