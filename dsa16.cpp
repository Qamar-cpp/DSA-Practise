#include<iostream>
using namespace std;
void func(int n)
{
    int a = 0 ;
    int b = 2 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < n; j++){
            cout <<"id "<<i <<", j "<<j << endl;
        }
    }
};
int main(){
    func(3);
    return 0 ;
}