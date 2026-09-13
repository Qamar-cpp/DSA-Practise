#include <iostream>
using namespace std;
void printarry(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertonsort(int *arr, int n)
{
    int key ;
    int j;
    for (int i = 0; i < n ; i++)
    {
        key = arr[i];
        j = i-1;
       while (j >= 0 && arr[j] > key)
       {
        arr[j+1] = arr[j];
        j--;
       }
       arr[j+1] = key;
    }
}
int main()
{
    int arr[] = {7, 4, 9, 65, 2};
    int n = 5;
    printarry(arr,n);
    cout <<"check it insert success or not  "<<endl;
    insertonsort(arr, n);
    printarry(arr, n);
    return 0;
}