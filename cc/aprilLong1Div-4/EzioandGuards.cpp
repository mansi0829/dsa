#include <iostream>
using namespace std;

void MANIPULATE()
{
    int T, a, b;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin>>a>>b;
        if (a >= b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    // your code goes here
    MANIPULATE();
    return 0;
}
