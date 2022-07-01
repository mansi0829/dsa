#include <bits/stdc++.h>
using namespace std;
int main()
{
    string maths, new_stor;
    cin >> maths;
    int n = maths.length();
    int i = 0;
    while (i < n)
    {

        if (maths[i] != '+')
        {
            new_stor.push_back(maths[i]);
        }
        i += 1;
    }
    sort(new_stor.begin(), new_stor.end());
    cout << new_stor[0];
    int j = 1;
    while (j < new_stor.length())
    {
        cout << "+" << new_stor[j];
        j += 1;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string maths, store;
//     cin >> maths;
//     for (int i = 0; i < maths.length(); i++)
//     {
//         if (maths[i] != '+')
//         {
//             store.push_back(maths[i]);
//         }
//     }
//     sort(store.begin(), store.end());
//     cout << store[0];
//     for (int i = 1; i < store.length() - 1; i++)
//     {
//         cout << "+" << store[i];
//     }

//     return 0;
// }