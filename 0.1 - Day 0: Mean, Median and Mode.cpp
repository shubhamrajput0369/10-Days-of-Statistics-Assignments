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
