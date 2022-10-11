#include <bits/stdc++.h>
using namespace std;

void mansi(int n)
{
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += s[i];
    }
    if (n % 2 != 0)
    {
        cout << -1 << endl;
    }
    // if(sum<0){
    //     cout <<-1<<endl;
    // }
    else
    {
        cout << abs(sum) / 2 << endl;
    }
}

int main()
{
    // your code goes here
    int testcase, a, b, c;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a;
        mansi(a);
    }
    return 0;
}
