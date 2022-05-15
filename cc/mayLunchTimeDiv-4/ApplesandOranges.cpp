#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int total, a, b;
    cin >> total;
    cin >> a >> b;
    if (abs(b + a) <= total)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}
