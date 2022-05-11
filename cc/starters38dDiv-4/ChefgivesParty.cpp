#include <iostream>
using namespace std;

void SUBSCRIBE(int a, int b, int c)
{
    if (a * b > c)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    // your code goes here
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        SUBSCRIBE(a, b, c);
    }

    return 0;
}
