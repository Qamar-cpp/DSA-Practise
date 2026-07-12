#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    // 1. Push Operations - O(1)
    s.push(10);
    s.push(20);
    s.push(30); // Ab 30 sabse upar (top) hai

    // 2. Top Operation - O(1)
    std::cout << "Stack ka top element: " << s.top() << std::endl; // Output: 30

    // 3. Pop Operation - O(1)
    s.pop(); // 30 nikal gaya, ab top par 20 hai
    std::cout << "Pop ke baad new top: " << s.top() << std::endl; // Output: 20

    // Size aur Empty check - O(1)
    std::cout << "Stack ka size: " << s.size() << std::endl;
    
    return 0;
}