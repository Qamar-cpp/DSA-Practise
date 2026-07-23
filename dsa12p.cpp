#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout <<"first number of queue is "<<s.top<<endl;
    s.pop();
    cout <<"second number of queue is "<<s.top<<endl;
    s.pop();
    cout <<"third number of queue is "<<s.size<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    cout <<"first number of heap is "<<s.top<<endl;
    s.pop();
    cout <<"sec number of heap is "<<s.push<<endl;
    s.pop();
    cout <<"third number of heap is "<<s.push<<end;
    return 0;
}