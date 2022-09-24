// inverted half pyramid n=5
//  *****
//  ****
//  ***
//  **
//  *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)        // reduce number of rows
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}