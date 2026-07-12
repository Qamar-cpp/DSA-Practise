#include <iostream>
#include <stack>
using namespace std;

int main (){
    
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout <<"highest number is "<<s.top() << endl;
    s.pop();
    cout <<"sec one number is "<<s.top() << endl;
    cout <<"stack size "<<s.size() << endl;
    return 0;
    
}