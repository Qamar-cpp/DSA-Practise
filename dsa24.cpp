#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element is " << ptr->data << endl;
        ptr = ptr->next;
    }
}
struct node *insertatfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
}
struct node *insetatindex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
};
struct node *insertatend(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    ptr->data = data;
    struct node * p =head;
 
    while (p->next!=NULL)
    {
        p = p->next;
    }
    p = p->next = ptr;
    ptr->next = NULL;
    return head;
};
struct node *insertafteranode(struct node *head, struct node *prevnode, int data){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next = prevnode->next;
    prevnode->next=ptr;
};
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 0;
    head->next = second;
    second->data = 1;
    head->next = third;
    third->data = 2;
    head->next = fourth;
    head->data = 3;
    fourth->next = NULL;
     
    cout <<"insertion before list"<<endl;
    linkedlisttraversal(head);
    // head = insertatfirst(head, -1);
    cout<<"insertion after a node"<<endl;
    head = insertafteranode(head, second , 33);
    linkedlisttraversal(head);
    return 0;
}