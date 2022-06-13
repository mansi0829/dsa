#include <bits/stdc++.h>
#define ll long long int;
using namespace std;

void mansi(int first)
{
    long long int count = 0, k;
    string s1, s2, s3 = " ";
    cin >> s1 >> s2;
    for (int i = 0; i < first; i++)
    {
        if (s1[i] == s2[i])
        {
            count += 1;
        }
        else
        {
            k += 1;
            s3 += s2[i];
        }
    }
    sort(s3.begin(), s3.end());
    int ans = 0;
    for (int i = 0; i < s3.size()-1; i++)
    {
        if (s3[i] != s3[i + 1])
        {
            ans += 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    int testCases, a;
    cin >> testCases;
    while (testCases--)
    {
        cin >> a;
        mansi(a);
    }
    return 0;
}