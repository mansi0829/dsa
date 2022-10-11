#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    cin >> num;
    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] != 4 || num[i] != 7)
        {
            cout << "NO";
            break;
        }
        else{
            cout<<"YES";
            break;
        }
    }
    return 0;
}


// #include <bits/stdc++.h>
// typedef long long int ll;
// using namespace std;
// int main()
// {
//     ll n, count = 0;
//     cin >> n;
//     while (n != 0)
//     {
//         if (n % 10 == 4 || n % 10 == 7)
//         {
//             count += 1;
//         }
//         n /= 10;
//     }
//     if (count == 4 || count == 7)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }
//     return 0;
// }
