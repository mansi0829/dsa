// Hollow Rectangle Pattern
//****
//*  *      Rows : 5
//*  *      columns : 4
//*  *
//****
// here 1 and 5 row and also 1 and 4 column are having all stars

#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}