#include <iostream>
using namespace std;
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (arr[i] <= high && arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i<j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}
void quicksort(int arr[], int low, int high)
{
    int partitionOfIndex;
    if (low < high)
    {
        printarray(arr, 7);
        partitionOfIndex = partition(arr, low, high);
        quicksort(arr, low, partitionOfIndex - 1);
        quicksort(arr, partitionOfIndex + 1, high);
    }
}
int main()
{
    int arr[] = {7, 4, 9, 65, 2,5, 64};
    int n = 7;
    printarray(arr, n);
    quicksort(arr, 0, n-1);
    cout <<"now check that"<<endl;
    printarray(arr, n);
    return 0;
}