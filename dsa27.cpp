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
  }
int main(){
   stack * s = new stack();
    s->top = 4;
    s->size = 5;
    s->arr = new int[s->size];
     s->arr[0] = 43;
    s->top++;
    if(makingemptystack(s)){
      cout <<"the stack is empty"<<endl;
    }
    else {
      cout <<"the stack is not empty"<<endl;
    }
  
    // delete[] s->arr;
    // delete s ;
    // s = nullptr;
    

    return 0;
}