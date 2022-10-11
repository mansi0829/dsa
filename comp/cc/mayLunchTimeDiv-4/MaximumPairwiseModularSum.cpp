#include <bits/stdc++.h>
using namespace std;
void sum(int n, int m)
{
    vector<long> arr(n);

    for (long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxInitial = INT_MIN;
    sort(arr.begin(), arr.end());
    maxInitial = arr[n - 1] + arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        int largest = arr[i - 1] + arr[i] + ((arr[i - 1] - arr[i] + m) % (m));
        if (maxInitial < largest)
        {
            maxInitial = largest;
        }
    }

    cout << maxInitial << endl;
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