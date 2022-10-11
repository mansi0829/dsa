#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, n1, h[100005];
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        h[arr[i]] = i;
    }
    long long vasyacount = 0, petyacount = 0;
    int b;
    cin >> n1;
    while (n1--)
    {
        cin >> b;
        vasyacount += h[b];
        petyacount += n - h[b] + 1;
    }
    // int k = 0;
    // while (k != n1)
    // {
    //     int x = barr[k];
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (arr[i] == x)
    //         {
    //             continue;
    //         }
    //         vasyacount++;
    //     }
    //     k++;
    // }
    // int l = 0;
    // while (l != n1)
    // {
    //     int x = barr[l];
    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //         petyacount++;
    //         if (arr[i] == x)
    //         {
    //             continue;
    //         }
    //     }
    //     l++;
    // }

    cout << vasyacount << " " << petyacount;
    return 0;
}