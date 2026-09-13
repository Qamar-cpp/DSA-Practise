#include <iostream>
using namespace std;
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    cout <<endl;
}
void bublesort(int *arr, int n)
{
    int temp;
    int isSorted;
    for (int i = 0; i < n - 1; i++)
    {
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted){
            return ;
        }
    }
}
int main()
{
    int arr[] = {44, 55, 54, 23, 45, 67};
    // int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
     cout <<"before sort"<<endl;
    printarray(arr, n);
    bublesort(arr, n);
    cout <<"after sort"<<endl;
    printarray(arr, n);
    return 0;
}