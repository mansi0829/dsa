#include <bits/stdc++.h>
using namespace std;

void mansi(int first, int second)
{
    
    if ((second-first)%3==0 || (second-first)%3==1 )
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO"<<endl;
    }
}

int main()
{
    int testCases, a, b;
    cin >> testCases;
    while (testCases--)
    {
        cin >> a >> b;
        mansi(a, b);
    }
    return 0;
}