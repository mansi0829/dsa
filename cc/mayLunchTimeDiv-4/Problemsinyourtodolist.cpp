#include <iostream>
using namespace std;

void todo(int n)
{
    int arr[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 1000)
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
    while (t--)
    {
        cin >> n;
    }
    return 0;
}
