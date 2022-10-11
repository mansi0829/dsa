#include <bits/stdc++.h>
#define ll long long int ;
using namespace std;

void findPermutation(int a) {
    for(int i=2; i<=a; i++) {
        cout<<i<<" ";
    }
    cout<<1<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a;
        cin>>a;
        findPermutation(a);
    }

    return 0;
}