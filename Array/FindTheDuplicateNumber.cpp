// 287 Duplicate Number
// Time Complexity = O(N)
// Space Complexity = O(1)
#include <bits/stdc++.h>
using namespace std;

int findDuplicateNumber(int arr[],int n) {
    int slow = arr[0];
    int fast = arr[0];
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while(slow!= fast);
    fast = arr[0];
    while(slow!=fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<findDuplicateNumber(arr,n);

    return 0;
}