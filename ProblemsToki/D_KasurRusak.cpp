#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cassert>
#include <set>
#include <map>
#include <array>
#include <list>
#define pb push_back
typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vl;
using namespace std;
string s;
string func (ll n){
    ll i;
    for (i = 0; i < s.length()/2; i++){
        if (s[i] != s[s.length() - i - 1]) return "BUKAN";
    }
    return "YA";
}   
int main(int argc, char const *argv[])
{
    ll n;
    cin >> s;
    cout << func(n) << endl;
    return 0;
}
