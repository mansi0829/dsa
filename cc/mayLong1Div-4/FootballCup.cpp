#include <iostream>
using namespace std;

void FOOTCUP(int a, int b)
{
    if (a == b && a != 0 && b != 0)
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
    int T, a, b;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> a >> b;
        FOOTCUP(a, b);
    }
    return 0;
}
