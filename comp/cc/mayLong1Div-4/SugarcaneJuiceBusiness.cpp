#include <iostream>
using namespace std;

void SUGARCANE(int a)
{
    int totalIncome, profit, x;
    totalIncome = 50 * a;
    x = (totalIncome - (a * 10 * 2)) / 2;
    cout << x << endl;
}

int main()
{
    // your code goes here
    int T, a;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> a;
        SUGARCANE(a);
    }
    return 0;
}
