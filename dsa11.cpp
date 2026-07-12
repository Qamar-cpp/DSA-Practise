#include <iostream>
#include <queue>
#include <vector>

int main() {
    // ---------------- MAX-HEAP ----------------
    // Isme sabse bada number hamesha top par hoga
    std::priority_queue<int> maxHeap;

    // Insert - O(log n)
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);

    // Get Top - O(1)
    std::cout << "Max-Heap ka Top (Sabse Bada): " << maxHeap.top() << std::endl; // Output: 30

    // Pop - O(log n)
    maxHeap.pop(); // 30 nikal gaya, ab 20 top par aayega
    std::cout << "Pop ke baad Max-Heap ka Top: " << maxHeap.top() << std::endl; // Output: 20


    std::cout << "----------------------" << std::endl;


    // ---------------- MIN-HEAP ----------------
    // Isme sabse chhota number hamesha top par hoga
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    // Insert - O(log n)
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);

    // Get Top - O(1)
    std::cout << "Min-Heap ka Top (Sabse Chhota): " << minHeap.top() << std::endl; // Output: 10

    // Pop - O(log n)
    minHeap.pop(); // 10 nikal gaya, ab 20 top par aayega
    std::cout << "Pop ke baad Min-Heap ka Top: " << minHeap.top() << std::endl; // Output: 20

    return 0;
}