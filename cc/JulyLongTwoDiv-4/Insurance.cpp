#include <iostream>
using namespace std;

void mansi(int first , int second)
{
    if(first>second){
        cout<<second<<"\n";
    }
    else{
        cout<<first<<"\n";
    }
}

int main() {
	// your code goes here
	int testcases, first, second;
	cin>>testcases;
	while(testcases--){
	    cin>>first>>second;
	    mansi(first, second);
	}
	return 0;
}
