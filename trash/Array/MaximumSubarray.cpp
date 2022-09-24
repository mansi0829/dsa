// Leetcode : 53 Maximum Subarray
// Kadanes Algorithm
// Time complexity : O(n)
// space Complexity : O(1)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[n];
    }
    int maximum = arr[0], sum=0 ;
    for(int i=0; i<n; i++) {
        sum += arr[i];
        maximum = max(sum , maximum);
        if(sum<0) {
            sum = 0;
        }
    }
    cout<<maximum;
    return 0;
}