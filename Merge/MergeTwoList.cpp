#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m = 4, n = 4;
    int a[m] = {2, 7, 15, 18};
    int b[n] = {5, 9, 12, 17};
    int c[8];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    // for (; i <= m; i++)
    // {
    //     c[i] = a[i];
    // }
    // for (; i <= n; i++)
    // {
    //     c[i] = b[i];
    // }
    for (int i = 0; i < 8; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}

// fill remaining values of array c with remaining values of array a and b