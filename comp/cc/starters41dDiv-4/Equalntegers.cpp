#include <iostream>
using namespace std;

void mansi(long long int first, long long int second)
{
    long long int count = 0;
    if (first == second)
    {
        cout << "0 " << endl;
    }
    else
    {

        if (first < second)
        {
            cout << second - first << endl;
        }

        else
        {
            if (first % 2 == 0 && second % 2 == 0 || first % 2 != 0 && second % 2 != 0)
            {
                cout << (first - second) / 2 << endl;
            }
            else
            {
                if (first % 2 != 0 && second % 2 == 0 || first % 2 == 0 && second % 2 != 0)
                {
                    cout << ((first + 1 - second) / 2) + 1 << endl;
                }
            }
        }
    }
}

int main()
{
    // your code goes here
    int testCases;
    long long int a, b;
    cin >> testCases;
    while (testCases--)
    {
        cin >> a >> b;
        mansi(a, b);
    }
    return 0;
}
