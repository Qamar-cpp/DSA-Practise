#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class linkedlist
{
public:
    void linkedlisttraversal(node *ptr)
    {
        while (ptr != NULL)
        {
            cout << " Element is " << ptr->data << endl;
            ptr = ptr->next;
        }
    }
};
int stackbottom(node *head)
{
    if (head == NULL)
    {
        cout << "stack is empty " << endl;
        return -1;
    }
    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    return ptr->data;
};
node* push(node *top, int x) {
    node *n = new node();
    if (n == NULL) {
        cout << "Stack Overflow" << endl;
    } else {
        n->data = x;
        n->next = top;
        top = n;
    }
    return top;
};
int stacktop(node * head){
    if(head == NULL){
        return -1;
    }
     return head->data;
}
int peek(node * top ,int pos){
    struct node *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if(ptr != NULL){
        return ptr->data;
    }
    return -1;
}
int main()
{
   node * top = NULL;
   linkedlist list;
   top = push(top , 4);
   top = push(top , 5);
   top = push (top , 6);
   top = push (top , 7);
   cout << "--- Stack Elements (Top to Bottom) ---" << endl;
    list.linkedlisttraversal(top);
    cout << "\n--- Stack Operations Output ---" << endl;
    cout << "Top element: " << stacktop(top) << endl;
    cout << "Bottom element: " << stackbottom(top) << endl;
    cout << "Element at position 2 (Peek): " << peek(top, 2) << endl;
    cout << "Element at position 4 (Peek): " << peek(top, 4) << endl;
}