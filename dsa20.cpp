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
int binarySearch(int arr[], int size, int element){
    int high, mid , low ;
    low = 0;
    high = size - 1;
    while(low<=high){
    mid = (high + low)/2;
    if (arr[mid]==element){
        return mid;
    }
    if(arr[mid]<element){
        low = high -1 ;
    }
    else{
        high = low + 1;
    }}
    return -1;
    
};
int main(){
    int arr[]= {3, 44, 333, 555, 666, 677};
    int size = sizeof(arr)/sizeof(int);// address of element 
    cout <<"{3, 44, 333, 555, 666, 677}"<<endl;
    int element ;
    cout <<"enter the element of array "<<endl;
    cin>>element;
    int searchIndex = binarySearch(arr,size, element);
    cout <<"element found at index is "<<(element, searchIndex)<<endl;

    return 0;
}