#include <iostream>
using namespace std;

void DOMINANT(int a, int b, int c)
{
    if (a+b<c || a>b+c || a+c<b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    // your code goes here
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        DOMINANT(a, b, c);
    }

    return 0;
}
