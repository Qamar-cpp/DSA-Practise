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
void Selectionsort(int *arr, int n)
{
    int indexofMin;
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexofMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexofMin])
            {
                indexofMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexofMin];
        arr[indexofMin] = temp;
    }
}
int main()
{
    int arr[] = {7, 4, 9, 65, 2};
    int n = 5;
    printarry(arr, n);
    cout << "check that work or not " << endl;
    Selectionsort(arr, n);
    printarry(arr, n);
    return 0;
}