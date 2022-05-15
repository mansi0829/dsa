#include <iostream>
using namespace std;

void flow()
{
    int litres, maxLitres, rate, time;
    cin >> litres >> maxLitres >> rate >> time;
    if (litres + rate * time > maxLitres)
    {
        cout << "overFlow" << endl;
    }
    if (litres + rate * time == maxLitres)
    {
        cout << "filled" << endl;
    }
    if(litres + rate * time < maxLitres)
    {
        cout << "Unfilled" << endl;
    }
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        flow();
    }
    return 0;
}
