// Author: Shubham Bhagwansing Rajput
// CPP

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include <iomanip>
using namespace std;

float Mean(vector<int>X,int N)
{ float mean=0;
   for(auto i =0; i<N; i++)
    {
        mean=mean+X[i];
    }
    return mean/N;
}

float Median(vector<int>X, int N)
{ int mid= (N/2)-1;
    float median=0;
    sort(X.begin(), X.end());
    //if n is even
   if(N%2==0)
