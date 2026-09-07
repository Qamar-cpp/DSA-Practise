#include<iostream>
using namespace std;
struct node {
    int data;
    node * next;
};
//making queue using linkedlist,,,,
struct node * f= NULL;
struct node * r= NULL;
void linkedlisttraveral(node * ptr){
    cout <<"printing the element"<<endl;
    while(ptr != NULL){
        cout <<"element "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
void enqueue( int val){
   node * n = new node();
   if(n== NULL){
    cout <<"stack is full"<<endl;
   }else{
    n->data = val;
    n->next = NULL;
    if(f==NULL){
        f=r=n;
    }
     r->next=n;
     r= n;

   }
}
int dequeue(){
    int val =-1;
   node * n =f;
   if(f== NULL){
    cout <<"queue is empty"<<endl;
   }else{
    f = f->next;
    val= n->data;
    free(n);
   }
   return val;
}
int main(){
// cout <<"checkint is it work or not"<<endll
cout <<"deque the element "<<dequeue<<endl;
linkedlisttraveral(f);
enqueue(43);
enqueue(42);
enqueue(41);
cout<<"deque the element "<<dequeue()<<endl;
cout<<"deque the element "<<dequeue()<<endl;


    return 0;
}