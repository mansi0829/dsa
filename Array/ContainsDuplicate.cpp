// Leetcode : 217 Contains Duplicate
// error : i am checking a number with itself as well so it showing true 

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int j=0;
    for(int i=0; i<n; i++) {
        if(arr[i]==arr[j]) {
            cout<<"true";
            break;
        }
        else {
            cout<<"false";
            j++;
        }
    }
    return 0;
}


