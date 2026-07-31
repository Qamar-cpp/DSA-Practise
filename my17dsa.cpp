#include<iostream>
using namespace std;
class myarray
{
    int total_size;
    int used_size;
    int *ptr;
};
void createarray(myarray * a, int tSize, int uSize){
    (*a).total_size = tSize;
    (*a).used_size = uSize;
}
int main(){
      myarray();
      createarray(&marks,100,20);
    
    
}
arr = [2, 5, 8, 12, 16, 23, 38, 56, 72, 91] # Must be sorted
target = 23

low = 0
high = len(arr) - 1while low <= high:
    mid = (low + high) // 2
    if arr[mid] == target:
        print(f"Found at index: {mid}") # Output: Found at index: 5
        break
    elif arr[mid] < target:
        low = mid + 1
    else:
        high = mid - 1