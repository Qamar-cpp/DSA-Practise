#include<iostream>
using namespace std;
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(queue * q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
int isFull(queue * q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
void enqueue(queue * q , int val){
    if(isFull(q)){
        cout <<"queue is full"<<endl;
    }
    else{
        q->r++;
        q->arr[q->r] = val;
    }
}
int dequeue(queue * q ){
    int a = -1;
    if(isEmpty(q)){
        cout <<"queue is empty"<<endl;
    }
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
   
}

int main(){
struct queue q;
q.size = 2;
q.f = q.r = -1;
q.arr = new int[q.size];
enqueue(&q , 45);
enqueue(&q , 43);
enqueue(&q , 54);
cout << "dequeuing the element " << dequeue(&q) << endl;
cout << "dequeuing the element " << dequeue(&q) << endl;
if(isEmpty(&q)){
cout <<"queue is empty "<<endl;
}
if(isFull(&q)){
cout <<"queue is full "<<endl;
}
delete[] q.arr;
    return 0;
}