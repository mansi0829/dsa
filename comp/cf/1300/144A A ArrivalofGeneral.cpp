#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    int arr[t];
    for(int i=0; i<t; i++) {
        cin >> arr[i];
    }           
    int count =0 ;
    for(int i=0; i<t; i++) {
        if(arr[i]<arr[i+1]) {
            swap(arr[i], arr[i+1]);
            count++;
        }
        else {
            continue;
        }
    }
    cout<<count;
    return 0;
}

