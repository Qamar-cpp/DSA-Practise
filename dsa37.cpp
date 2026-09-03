#include<iostream>
#include<cstring>
using namespace std;
struct node {
    char data;
    node *next;
    char size;
    char top;
    char  *arr;
   
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
        if(isfull(top)){
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
            char val = temp ->data; 
            top = top -> next;
            delete temp;
            return val;
    }
};
char stacktop(node * top){
    if(top == NULL){
        cout <<"stack is empty"<<endl;
        return -1;
    }
    return top->data;
}
int precedence (char ch){
    if(ch == '*' || ch == '/'){
        return 3;
    }
    else if(ch == '+' || ch == '-'){
        return 2;
    }
    return 0;
};
int  isOperator(char ch){
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
        return 1;
    }
    return 0;
};
char * infixtopostfix(char * infix){
    struct node * sp = new node();
    sp->size= 100;
    sp->top = -1;
    sp->arr  = new char[sp->size];
    char * postfix = (char *)malloc((strlen(infix)+1) * sizeof(char));
    int i = 0;
    int j = 0;
    while (infix[i]!= '\0')
    {
       if(!isOperator(infix[i])){
        postfix[j] = infix[i];
        j++;
        i++;
       }
        else {
        if
        (precedence(infix[i])> precedence(stacktop(sp))){
        push(sp, infix[i]); 
                i++;
       }
       else {
        postfix[j] = pop(sp);
        j++;
    }
}
    }
    while(!empty(sp)){
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
    
};
int main(){
    char infix[] = "a-b+t/6";
    cout <<"the postfix of percentage sp is "<<infixtopostfix(infix)<<endl;
    return 0;
}
   