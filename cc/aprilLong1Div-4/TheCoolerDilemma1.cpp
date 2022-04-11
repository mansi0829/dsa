#include <iostream>
using namespace std;

void WATERCOOLER1()
{
    int T, X, Y, M;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X >> Y >> M;
        int rent = X * M;
        int purchase = Y;
        if (rent < purchase)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    // your code goes here
    WATERCOOLER1();
    return 0;
}
