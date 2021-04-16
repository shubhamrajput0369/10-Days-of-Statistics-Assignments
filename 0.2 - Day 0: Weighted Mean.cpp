// Author: Shubham Bhagwansing Rajput
// CPP
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


/*
 * Complete the 'weightedMean' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY X
 *  2. INTEGER_ARRAY W
 */

void weightedMean(vector<int> X, vector<int> W, int a) {
    int product=0,weight_sum=0,mult_sum=0;
    for(auto i=0;i<a;i++)
    {
        weight_sum=weight_sum+W[i];
        product=X[i]*W[i];
        mult_sum=mult_sum+product;
    }