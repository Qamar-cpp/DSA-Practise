#include <iostream>
using namespace std;

// Stack ke har ek element (Node) ka structure
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Stack Class
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == NULL;
    }

    // Push operation (Element add karna)
    void push(int x) {
        Node* temp = new Node(x);
        if (!temp) {
            cout << "Stack Overflow" << endl;
            return;
        }
        temp->next = top;
        top = temp;
        cout << x << " pushed to stack" << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        Node* temp = top;
        top = top->next;
        int poppedValue = temp->data;
        delete temp; // Dynamic memory free karna
        return poppedValue;
    }

    int peek() {
        if (!isEmpty()) return top->data;
        return -1;
    }
};

int main() {
    Stack s;

    
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << " popped from stack" << endl;

    if (s.isEmpty()) {
        cout << "Stack empty hai" << endl;
    } else {
        cout << "Stack mein abhi elements hain. Top element: " << s.peek() << endl;
    }

    return 0;
}