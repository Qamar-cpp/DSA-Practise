#include <iostream>
using namespace std;
void func1(int n)
{
    int sum = 0;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
         for (int j = 0; j <= i; j++)
        {
             cout << " %d\n", i, j;
        }
    }
};
int main()
{
    func1(4);
    return 0;
}
