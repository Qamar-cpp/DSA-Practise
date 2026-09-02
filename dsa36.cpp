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
char match(char a , char b){
    if ( a == '{' && b == '}'){
    return 1;
    }
    if ( a == '(' && b == ')'){
        return 1;
    }
    if( a == '[' && b == ']'){
        return 1;
    }
    return 0;
}
int paranthesisMatch(char * exp){
    char popped_ch;
     node * sp = NULL;
    for (int  i = 0; exp[i] != '\0'; i++){
        if(exp[i]=='(' || exp[i] == '{' || exp[i] == '['){
        sp =  push(sp ,exp[i]);
        }
        else if (exp[i]==')' || exp[i] == '}' || exp[i] == ']'){
           if(empty(sp)){
            return 0;
           }
            popped_ch=pop(sp);
           if(!match(popped_ch,exp[i])){
            return 0;
           }
           
        }
        }
        if(empty(sp)){
            return  1;
        }
        else{ 
            while(!empty(sp)){
            pop(sp);
            }
            return 0;
        }
        
    };
int main(){
    char exp[] = "{(8*4())}";
   if(paranthesisMatch(exp)){
    cout <<"the paranthesis is balanced"<<endl;
   }
   else {
    cout <<"the parenthesis is not balanced"<<endl;
   }
    return 0;
}