#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    // deleting a first node from linked list,,
};
void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << "element " << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << "Null " << endl;
};
// deleting
// inseting
// adding
// circular.
// first ,,, between ,,  last ,,, after a node
struct node *deletefirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
// deleting at index
struct node *deleteatindex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
        p = p->next = q = q->next;
        free(q);
    }
     p = p->next = q = q->next;
        free(q);
        return head;
};
struct node * deletelastnode(struct node * head){
    struct node * p = head;
    struct node * q = head ->next;
    while(q->next != NULL){
        p->next = p;
        q->next = q;
    }
    p ->next = NULL;
    free(q);
    return head;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 4;
    head->next = second;

    second->data = 6;
    second->next = third;

    third->data = 4;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = NULL;
    cout << "Before deleting the last node:" << endl;
    linkedlisttraversal(head); 
    // 2. Node Delete Karein
    //head = deletefirst(head);
    // head = deleteatindex(head, 1);
    head = deletelastnode(head);
    cout << "After deleting the last node:" << endl;
    linkedlisttraversal(head);
}