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
void merge(int A[], int mid, int low, int high)
{
    int B[high - low + 1];
    int i = low;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
        }
    }
    while (i <= mid)
    {
        B[k++] = A[i++];
    }
    while (j <= high)
    {
        B[k++] = A[j++];
    }
    for (int p = 0; p < k; p++)
    {
        A[low + p] = B[p];
    }
}
void mergesort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = low + (high - low) / 2;
        mergesort(A, low, mid);
        mergesort(A, mid + 1, high);
        merge(A, mid, low, high);
    }
}
int main()
{
    int arr[] = {7, 4, 9, 65, 2, 5, 64};
    int n = 7;
    printarray(arr, n);
    mergesort(arr, 0, 6);
    printarray(arr, n);
    return 0;
}