#include <iostream>
using namespace std;

void mansi(int n)
{
    int inputarr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> inputarr[i];
    }
    int flag = 1;
    int max = inputarr[0], min = inputarr[0];
    for (int i = 0; i < n; i++)
    {
        if (inputarr[i] < min)
        {
            min = inputarr[i];
        }
        else if (inputarr[i] > max)
        {
            max = inputarr[i];
        }

        if (inputarr[i] == max || inputarr[i] == min)
        {
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    // your code goes here
    int testcase, n;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n;
        mansi(n);
    }
    return 0;
}
