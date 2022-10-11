#include <iostream>
using namespace std;

int main() {
	// your code goes here
	double testCases , currentfloorofChef, currentfloorofChefina ,speedOfChef, speedOfChefina;
	cin>>testCases;
	while(testCases--) {
	    cin>>currentfloorofChef >> currentfloorofChefina >> speedOfChef >> speedOfChefina ;
	    if (currentfloorofChef/speedOfChef < currentfloorofChefina/speedOfChefina) {
	        cout<<"Chef"<<endl;
	    }
	    else if (currentfloorofChef/speedOfChef > currentfloorofChefina/speedOfChefina) {
	        cout<<"Chefina"<<endl;
	    }
	    else {
	        cout<<"Both"<<endl;
	    }
	    
	}
	return 0;
}
