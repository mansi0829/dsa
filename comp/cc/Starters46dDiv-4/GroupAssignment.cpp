#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
typedef long long int ll;
using namespace std;

int frequencyNumber(int arr[], int size)
{

    // Creating a HashMap containing integer
    // as a key and occurrences as a value
    unordered_map<int, int> freqMap;

    for (int i = 0; i < size; i++)
    {
        freqMap[arr[i]]++;
    }

    // Printing the freqMap
    for (auto it : freqMap)
    {
        cout<< it.second ;
    }
}

int main()
{
    ll testcases;
    cin >> testcases;
    ll first;
    while (testcases--)
    {
        cin >> first;
        int b[first];
        for (int i = 0; i < first; i++)
        {
            cin >> b[i];
            // countFreq(b, first);
        }
        // cin >> b[i];
        cout<< frequencyNumber(b, first);
        // if (frequencyNumber(b, first) > 1)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }
    return 0;
}