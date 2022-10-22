// will take count untill -1

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000];
    int count = 0;
    for (int i = 0; i < 1000 && (i < 1 || arr[i - 1] != -1); i++)
    {
        cin >> arr[i];
        count++;
    }
    for (int i = 0; i < count - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}