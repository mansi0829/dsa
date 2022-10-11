#include <iostream>
using namespace std;

void todo(int n)
{
    int arr[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 1000)
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    // your code goes here
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        todo(n);
    }
    return 0;
}
