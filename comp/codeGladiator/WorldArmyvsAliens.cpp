/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Write code here
    int launchTime,lhh, lmm, travelTime,thh,tmm, totalTime,ans,r;
    cin>>lhh>>lmm;
    cin>>thh>>tmm;
    launchTime = lhh*60 + lmm;
    travelTime = thh*60 + tmm;
    totalTime = launchTime+travelTime;
    r = totalTime/60;
    int inpart = (int)r;
    double depart = r-inpart;
    int minutes = depart*60;
    cout<<inpart<<minutes;
    return 0;
}
