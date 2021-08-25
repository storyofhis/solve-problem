#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cassert>
#define pb push_back
typedef long long int ll;
typedef long double ld;
using namespace std;

bool is(vector<char> str1, vector<char> str2){
    sort(str1.begin(), str2.end());
    sort(str2.begin(), str2.end());
    if (str1.size() != str2.size())
        return false;
    for (int i = 0; i < str1.size(); i++){
        if (str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}

// Driver Code
int main()
{
    vector <char> str1, str2;
    char s1, s2;
    ll num1 = 0, num2 = 0;
    cin >> s1 >> s2;
    str1.pb(s1);
    str2.pb(s2);
    if (is(str1, str2)) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}

// huruf2 sama ascii
