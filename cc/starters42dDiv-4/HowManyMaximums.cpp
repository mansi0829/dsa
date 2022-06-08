#include <iostream>
using namespace std;

void mansi(int n)
{
    string inputs;
    int count = 1;

    cin >> inputs;
    for (int i = 0; i < n - 1; i++)
    {
        if (inputs[i] == '1' && inputs[i + 1] == '0')
            count++;
    }
    cout << count << endl;
}

int main()
{
    // your code goes here
    int testcaes, n;
    cin >> testcaes;
    while (testcaes--)
    {
        cin >> n;
        mansi(n);
    }
    return 0;
}
