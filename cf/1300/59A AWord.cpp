#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string aword;
    cin >> aword;
    int uppercount = 0, lowercount = 0;
    for (int i = 0; i < aword.length(); i++)
    {
        if (isupper(aword[i]))
        {
            uppercount += 1;
        }
        else
        {
            lowercount += 1;
        }
    }

    if (uppercount <= lowercount)
    {
        transform(aword.begin(), aword.end(), aword.begin(), ::tolower);
    }
    else
    {
        transform(aword.begin(), aword.end(), aword.begin(), ::toupper);
    }
    // cout << uppercount << endl;
    // cout << lowercount;
    cout << aword;

    return 0;
}