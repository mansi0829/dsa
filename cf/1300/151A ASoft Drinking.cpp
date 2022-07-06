#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
typedef long long int ll;
using namespace std;

int main()
{
    int n_friends, k_bottles, l_eachmillilitersofthedrink, c_limes, d_slices, p_gramsofsalt, nl_req_millilitersdrink, np_reqgramssalt;
    cin >> n_friends >> k_bottles >> l_eachmillilitersofthedrink >> c_limes >> d_slices >> p_gramsofsalt >> nl_req_millilitersdrink >> np_reqgramssalt;
    int overalldrinkss = k_bottles * l_eachmillilitersofthedrink;
    int totalToast = overalldrinkss / nl_req_millilitersdrink;
    int limesEnough = c_limes * d_slices;
    int saltEnough = p_gramsofsalt / np_reqgramssalt;
    int edge;
    
    if (totalToast <= limesEnough && totalToast <= saltEnough)
    {
        edge = totalToast;
    }
    if (totalToast >= limesEnough && limesEnough <= saltEnough)
    {
        edge = limesEnough;
    }
    if (totalToast >= saltEnough && limesEnough >= saltEnough)
    {
        edge = saltEnough;
    }
    cout << edge / n_friends;
    return 0;
}