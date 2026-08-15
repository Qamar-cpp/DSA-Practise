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

int find(node*    n, int value){

    node* p=n;
    node*q=n->next;
    while(q->data!=value &&q->next !=nullptr){
        q=q->next;
        p=p->next;
    }
    if(q->data=value) {
        p->next=q->next;
        return value;
    }
    else{
        return 0;
    }
}
void deletenode(node* p, int value){

    int tmp;
   
    node* q=p->next;
     while(q->data != value && q->next != NULL ){
   p= p->next;
  q=  q->next ;
  }
  if (q->data == value){
   
    p->next= q->next;
  }
}
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
};
// delete at a given value 
 node* deleteAtvalue(struct node* head, int value){
   node *p = head;
  node *tmp=nullptr;
   node *q = head->next;
   cout<<"working"<<endl;
  while(p->data != value && q->next != NULL ){
    p->next = p;
    q->next = q;
  }
  cout<<"working"<<endl;
  if (q->data == value){
    p->next= q->next;
    free(q);
  }
  return head;
}; 
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

    third->data = 8;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = NULL;
    cout << "Before deleting the value :" << endl;
    linkedlisttraversal(head); 
    // 2. Node Delete Karein
    //head = deletefirst(head);
    // head = deleteatindex(head, 1);
    // head = deletelastnode(head);
    int tmp=find(head,6);
    if(tmp!=0){
        cout<<"value found "<<tmp<<endl;
    }
    else {
        cout<<"cout value not found";
    }
//    cout<<"value found"<<find(head, 4);
    cout << "After deleting the value:"<< endl;
    linkedlisttraversal(head);
    return 0;
}