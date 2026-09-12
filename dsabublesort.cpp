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
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {44, 55, 54, 23, 45, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
     cout <<"before sort"<<endl;
    printarray(arr, n);
    bublesort(arr, n);
    cout <<"after sort"<<endl;
    printarray(arr, n);
    return 0;
}