#include<ios>
using namespace std;
struct node{
    int data;
    struct node * next;
};
void linkedlisttraversal(struct node *ptr){
    while()
}


int main (){
struct node * head;
struct node * second;
struct node * third;
head = (struct node *)malloc(sizeof(struct node));
second = (struct node *)malloc(sizeof(struct node));
third = (struct node *)malloc(sizeof(struct node));
head ->data = 7;
head -> next = second;

second ->data = 55;
second ->next = third;

third ->data = 77;
third ->next =NULL;

    return 0;
}