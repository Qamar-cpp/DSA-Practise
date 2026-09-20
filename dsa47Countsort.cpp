#include <iostream>
#include <limits>
using namespace std;
void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
int maximum(int *A, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
};
void countsort(int *A, int n)
{
    int i, j;
    int max = maximum(A, n);
    int *count = new int;
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]]+1;
    }

    i = 0;
    j = 0;
    while (i <= max)
    {
        if (count[i] > 0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        i++;
    }
}
int main()
{
    int A[] = {7, 4, 9, 65, 2, 5, 64};
    int n = 7;
    printarray(A, n);
    countsort(A, n);
    printarray(A, n);
    return 0;
}