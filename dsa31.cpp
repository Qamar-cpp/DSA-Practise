#include<iostream>
using namespace std;
class stack{
    public:
    int top;
    int *arr;
    int size;
};
  int makingemptystack(stack* ptr){
      if(ptr->top == -1){
        return 1;
      }
      else return 0;
  };
  int makingfullstack(stack * ptr){
    if(ptr->top == ptr->size-1){
       return 1;
    }
    else return 0;
  };
  int peek(stack * sp, int i){
    if(sp->top - i + 1 < 0){
        cout <<"not valid position "<<endl;
        return -1;
    }
    else{ 
        return sp->arr[sp->top - i + 1] ;
    }
  };
  int stacktop(struct stack * sp){
    return  sp->arr[sp->top];
  }
  int stackbottom(struct stack * sp){
    return sp->arr[0];
  }
int main(){
   stack * sp = new stack();
    sp->top = 4;
    sp->size = 5;
    sp->arr = new int[sp->size];
     sp->arr[0] = 43;
    sp->top++;
    sp->arr[0] = 43; sp->top++;
    sp->arr[1] = 23; sp->top++;
    sp->arr[2] = 45; sp->top++;
    sp->arr[3] = 55; sp->top++;
    sp->arr[4] = 66; sp->top++;
    if(makingemptystack(sp)){
      cout <<"the stack is empty"<<endl;
    }
    else {
      cout <<"the stack is not empty"<<endl;
    }
    for(int j = 1;j <  sp->top+ 1 ; j++ ){
      cout <<"the value  "<< j <<" at postion is   " << peek(sp , j)<<endl;
    }
    // delete[] s->arr;
    // delete s ;
    // s = nullptr;
 cout <<"the top most element is "<<stackbottom<<endl;
 cout <<"the bottom most element is "<<stacktop<<endl;
    return 0;
}