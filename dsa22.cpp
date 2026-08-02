#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;

};
void linkedlisttraversal(struct node *ptr){
    while(ptr != NULL)
    {
        cout <<"Element is "<<ptr->data<<endl;
        ptr = ptr->next;

    }
};
int main(){
    struct node * head ;
    struct node * second;
    struct node * third;
    //allocate memory for nodes in the linked list in heap,,,,,,
    head = (struct node *) malloc(sizeof(struct node));
        second = (struct node *) malloc(sizeof(struct node));
            third = (struct node *) malloc(sizeof(struct node));
            head ->data = 7;
            head ->next = second;
             
            second ->data = 55;
            second ->next = third;

            third ->data =77;
            third ->next = NULL;
             linkedlisttraversal(head);

            return 0 ;

}