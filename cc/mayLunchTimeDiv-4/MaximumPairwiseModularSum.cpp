#include <bits/stdc++.h>
using namespace std;
void sum(int n, int m)
{
    int arr[n], maxInitial = arr[0] + arr[0] + ((arr[0] - arr[0]) % m);
    int largest[n * n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int k = 0; k < n * n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                largest[k] = arr[i] + arr[j] + ((arr[i] - arr[j]) % (m));
                cout << max(largest[k], largest[k + 1]) << endl;
            }
        }
    }
}
int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        sum(n, m);
    }
    return 0;
}