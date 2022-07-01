// 1698 There is an array a with n−1 integers. Let x be the bitwise XOR of all elements of the array. The number x is added to the end of the array a (now it has length n), and then the elements are shuffled.

// You are given the newly formed array a.What is x ? If there are multiple possible values of x, you can output any of them.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int totalIntegers;
        cin >> totalIntegers;
        int A[totalIntegers];
        for (int i = 0; i < totalIntegers; i++)
        {
            cin >> A[i];
        }
        for(int i=0;i<totalIntegers;i++){
	        int z=0;
	        //cout<<(z^A[i])<<" ";
	        for(int j=0;j<totalIntegers;j++){
	           if(j!=i) z= (z^A[j]);
	           //cout<<z<<" ";
	        }
	        //cout<<z<<" ";
	        if(z == A[i]){
	            cout<<z<<endl;
	            break;
	        }
	    }
    }
    return 0;
}