#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int maxNo = INT_MIN, minNo = INT_MAX;

    for (int i = 1; i <= n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
        // or
        //  if (arr[i] > maxNo)
        //  {
        //      maxNo = arr[i];
        //  }
        //  if (arr[i] < minNo)
        //  {
        //      minNo = arr[i];
        //  }
    }
    cout << "Max Number is : " << maxNo << endl;
    cout << "Min Number is : " << minNo;

    return 0;
}