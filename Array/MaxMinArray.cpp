// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int i = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int start = 0, end = n - 1;
//     int mid = n / 2;
//     while (start < end)
//     {
//         if (arr[end] < arr[start])
//         {
//             swap(arr[end], arr[start]);
//         }
//         start += 1;
//         end -= 1;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// method 1 linear search
// Time complexity: O(n)
// Auxiliary Space: O(1)

#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
typedef long long int ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    if(n==1) {
        cout<<arr[0]<<" "<<arr[1];
    }
    else {
        int min=arr[0], max=arr[1];
        for (int i=2 ; i<n ; i++) {
            if(arr[i]<min) {
                min=arr[i];
            }
            else if(arr[i]>max) {
                max=arr[i];
            }
        }
        cout<<min<<" "<<max;
    }
    
    

    return 0;
}
