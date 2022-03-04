//rectangle pattern
// ****
// ****
// ****
// ****

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the Number of rows to be added : ";
    cin >> a;
    cout << "\nEnter the Number of columns to be added : ";
    cin >> b;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
