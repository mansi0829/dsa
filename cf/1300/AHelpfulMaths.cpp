// approach : create a new string 

#include <bits/stdc++.h>
using namespace std;
int main() {
    string storeValue, inputString ;
    cin>>inputString;
    for(int i=0; i<inputString.size(); i++) {
        if(inputString[i]!='+') {
            storeValue.push_back(inputString[i]);
        }    
    }
    sort(storeValue.begin(), storeValue.end());
    cout<<storeValue[0];
    for(int i=1; i<storeValue.size(); i++) {
        cout<<"+"<<storeValue[i];
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