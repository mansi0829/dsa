#include <iostream>
using namespace std;

void SUBSCRIBE(int n)
{
    if (n > 30)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    // your code goes here
    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        SUBSCRIBE(a);
    }

    return 0;
}
