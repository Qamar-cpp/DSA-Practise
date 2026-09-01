#include<iostream>
using namespace std;
struct node {
    char data;
    node *next;
   
};
    int isfull(node * ptr){
        node * n = new (nothrow) node;
        if(n == NULL ){
            return 1;
        }
        else{
            delete n;
            return 0;
        }
    };

    int empty (node * top){
        if(top == NULL){
            return 1; 
        }
        return 0;
    };
    node * push(node * top , char x){
        node *n = new node;
        if(top == NULL){
            cout<<"stack overflow"<<endl;
        }
        else{
            node * n = new node;
            n->data = x;
            n->next = top;
            top = n;
        }
        return top;
    };
    char pop(node *&top){
        if(empty(top)){
            cout <<"stack is underflow"<<endl;
            return -1;
        }else{
            node *temp = top ;
            int val = temp ->data; 
            top = top -> next;
            delete temp;
            return val;
    }
};
int paranthesisMatch(char * exp){
     node * sp = NULL;
    for (int  i = 0; i < exp[i] != '\0'; i++){
        if(exp[i]=='('){
         push(sp ,'(');
        }
        else if (exp[i]==')'){
           if(empty(sp)){
            return 0;
           }
        }
        pop(sp);
        }
        return 0;
    };
int main(){
    char exp[] = "8)*(4)";
   if(paranthesisMatch(exp)){
    cout <<"the paranthesis is match"<<endl;
   }
   else {
    cout <<"the parenthesis is not match"<<endl;
   }
    return 0;
}