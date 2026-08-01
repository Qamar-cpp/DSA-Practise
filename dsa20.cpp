#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
        return i;
     }
    }
    return -1;
    
}
int main(){
    int arr[]= {3, 44, 33, 555, 66, 45, 24};
    int size = sizeof(arr)/sizeof(int);
    int element = 44;
    int searchIndex = linearSearch(arr,size, element);
    cout <<"element found at index is "<<(element, searchIndex)<<endl;

    return 0;
}