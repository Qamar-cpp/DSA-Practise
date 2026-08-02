#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* first = new Node();
    first->data = 10;
    
    Node* second = new Node();
    second->data = 20;
    
    first->next = second;
    second->next = NULL; 

    
    cout << "Pehla Node Data: " << first->data << endl;
    cout << "Doosra Node Data (Pehle ke zariye access kiya): " << first->next->data << endl;

    return 0;
}