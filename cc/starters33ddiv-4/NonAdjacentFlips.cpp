#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int a, count1 = 0, count2 = 0;
        cin >> a;
        string binaryString;
        cin >> binaryString;
        for (int k = 0; k < a; k++)
        {
            if (binaryString[k] == '1')
            {
                count2++;
                if (binaryString[k] == binaryString[k + 1])
                {
                    count1++;
                }
            }
        }
        if (count2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (count1 == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}