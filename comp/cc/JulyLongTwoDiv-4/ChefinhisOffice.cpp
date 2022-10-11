#include <iostream>
using namespace std;

void mansi(int first , int second)
{
    cout<<first*4 + second<<"\n";
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
