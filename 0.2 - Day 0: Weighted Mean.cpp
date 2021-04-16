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
    float res = float(mult_sum)/weight_sum;
    cout<<fixed<<setprecision(1)<<res;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string vals_temp_temp;
    getline(cin, vals_temp_temp);

    vector<string> vals_temp = split(rtrim(vals_temp_temp));

    vector<int> vals(n);

    for (int i = 0; i < n; i++) {
        int vals_item = stoi(vals_temp[i]);

        vals[i] = vals_item;
    }

    string weights_temp_temp;
    getline(cin, weights_temp_temp);

    vector<string> weights_temp = split(rtrim(weights_temp_temp));

    vector<int> weights(n);

    for (int i = 0; i < n; i++) {
        int weights_item = stoi(weights_temp[i]);

        weights[i] = weights_item;
    }

    weightedMean(vals, weights, n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
