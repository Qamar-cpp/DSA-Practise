#include<iostream>
using namespace std;
int main(){
int square = -1;
int &ptr = square;
int num  = ptr;
do{
   cout <<"enter an number"<<endl;
   cin>>num;
   cout<<"square root is "<<num*num <<endl;

}while(num * num);
if (num != square)
{
   cout<<"nothing will run ,,,,,,,stop"<<endl;
}
return 0;
}


// cout<<"sum of these a and b is "<< a + b <<endl;
