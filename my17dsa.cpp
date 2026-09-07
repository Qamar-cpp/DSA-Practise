#include <iostream>
using namespace std;
class myarray
{
public:
    int total_size;
    int used_size;
    int *ptr;
};
void createarray(myarray *a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = new int[tSize];
}
int binarysearch(int size, int target, int arr[]){
    int low = 0;
    int high = size-1;
    while(low <= high){
        int mid = low + (high - low) / 2;
    if(arr[mid] == target){
        return mid;
    }
    else if (arr[mid] < target) {
            low = mid + 1;
    }
    else {
            high = mid - 1; 
        }
}
return -1;
}
int main(){
    myarray marks;
    createarray(&marks, 100, 10);
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    int result = binarysearch(size,target ,arr);
    if (result != -1) {
        cout << "Found at index: " << result << endl;
    } else {
        cout << "Element not found!" << endl;
    }
    delete[] marks.ptr;

    return 0;
}


