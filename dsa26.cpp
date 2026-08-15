#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    // deleting a first node from linked list,,
};
// making circular traversal
void linkedlisttraversal(struct node *head)
{
    struct node * ptr = head;
      do
    {
        cout << "element " << ptr->data << endl;
            ptr = ptr->next;}
            while
            (ptr != head);
    
};
node * insertatfirst(node * p , int data){
    // making circular linkedlist and also insertion
    node * ptr = new node;
    ptr -> data= data;
    node* head = p;
    while(head->next!= p){
       head = head->next;
    }
    head->next = ptr;
    ptr->next= p;
    return ptr; 
}

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
void makeLL(node* p, int n){
    node* head=p;
    node* NewNode=new node;
    NewNode->data=n;
    if(p==nullptr){
       p=NewNode;
    }
    else{
        while(head->next!=p){
            head=head->next;
        }
        head->next=NewNode;
        NewNode->next=p;
    }
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

    third->data = 8;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = head;
    cout << "Before inserting the value :" << endl;
    linkedlisttraversal(head); 
    // 2. Node Delete Karein
    //head = deletefirst(head);
    // head = deleteatindex(head, 1);
    // head = deletelastnode(head);
    // int tmp=find(head,6);
    // if(tmp!=0){
    //     cout<<"value found "<<tmp<<endl;
    // }
    // else {
    //     cout<<"cout value not found";
    // }
    head = insertatfirst(head, 44);
//    cout<<"value found"<<find(head, 4);
    cout << "After inserting the value:"<< endl;
    linkedlisttraversal(head);
    return 0;
}