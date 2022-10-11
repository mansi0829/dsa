#include <bits/stdc++.h>
using namespace std;

void NOTUNIT()
{
    int T, num1, num2;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> num1 >> num2;
        if (num1 % 2 == 0)
        {
            if ((num1 + 2) < num2)
            {
                cout << num1 << " " << num1 + 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (num1 % 3 == 0)
        {
            if ((num1 + 3) < num2)
            {
                cout << num1 << " " << num1 + 3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            if ((num1 + 3) < num2)
            {
                cout << num1 + 1 << " " << num1 + 3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}

int main()
{
    NOTUNIT();
    return 0;
}