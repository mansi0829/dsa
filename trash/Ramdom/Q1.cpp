#include<bits/stdc++.h>
using namespace std;
 


int evennumberDivisor (int n) {
    int count = 0 ;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            if(i%2==0){
                count++;
            }
        }
    }
    return count;   
}
 
int oddnumberDivisor (int n) {
    int count = 0 ;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            if(i%2!=0){
                count++;
            }
        }
    }
    return count;   
}
 
int main() {
	long n;
	cin >> n;	
//   	string answer=solution(n);
    int neven = evennumberDivisor(n);
    int nodd = oddnumberDivisor(n);
    if(neven>nodd) cout<< "BUY";
    else if (neven<nodd) cout<< "SELL";
    else cout<< "PASS";
// 	cout << answer << endl;
    return 0;
}