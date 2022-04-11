#include <iostream>
using namespace std;

void WATERCOOLER2()
{
    int T, rent, purchase;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> rent >> purchase;
        int x = purchase / rent;
        int y = purchase % rent;
        if (y == 0)
        {
            cout << x - 1 << endl;
        }
        else
            cout << x << endl;
    }
}

int main()
{
    // your code goes here
    WATERCOOLER2();
    return 0;
}
