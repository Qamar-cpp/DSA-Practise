#include<iostream>
using namespace std;
void func(int n){
    int sum = 0;
    int product = 1;
    for (int i = 0 ; i < n; i++){
        for(int j = 0; j <n ;j++){
            cout <<" id " << i<<"j" << j ;
        }
    }
}
int main (){
     func (6);
     return 0;
}