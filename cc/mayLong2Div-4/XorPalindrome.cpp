#include <bits/stdc++.h>
using namespace std;

void mai(int number)
{
    long count = 0, a;
    string arr;
    cin>>arr;
    for (int k = 0; k < number / 2; ++k)
    {
        if (arr[k] != arr[number - 1 - k])
        {
            count += 1;
        }
    }
    if (count % 2 == 0)
    {
        a = count / 2;
    }
    else
    {
        a = (count / 2) + 1;
    }
    cout << a << endl;
}

int main()
{
    // your code goes here
    int testcases, number;
    cin >> testcases;
    while (testcases--)
    {
        cin >> number;
        mai(number);
    }
    return 0;
}
