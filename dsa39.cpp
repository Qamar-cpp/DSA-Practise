#include <iostream>
using namespace std;
struct Circularqueue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(Circularqueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
int isFull(Circularqueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(Circularqueue *q, int val)
{
    if (isFull(q))
    {
        cout << "queue is full" << endl;
    }
    else
    {
        cout << "enqueing the element " << val << endl;
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
    }
}
int dequeue(Circularqueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct Circularqueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = new int[q.size];
    enqueue(&q, 45);
    enqueue(&q, 43);
    enqueue(&q, 54);
    cout << "dequeuing the element " << dequeue(&q) << endl;
    cout << "dequeuing the element " << dequeue(&q) << endl;
    cout << "dequeuing the element " << dequeue(&q) << endl;
    enqueue(&q, 4);
    enqueue(&q, 5);
    enqueue(&q, 6);
    if (isEmpty(&q))
    {
        cout << "queue is empty " << endl;
    }
    if (isFull(&q))
    {
        cout << "queue is full " << endl;
    }
    delete[] q.arr;
    return 0;
}