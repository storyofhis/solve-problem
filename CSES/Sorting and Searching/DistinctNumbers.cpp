#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <array>
#include <cmath>
#include <list>
#define pi 3.14159265
#define pb push_back
#define mod 1000000007
#define mp make_pair
#define ff first
#define ss second
#define rep(i,a,b) for(ll i=a;i<b;i++)
typedef long long int ll;
using namespace std;


int main(int argc, char const *argv[])
{
    ll t = 1;
    while (t--){
        ll n, num; 
        cin >> n;
        set <ll> s;
        for (ll i = 0; i < n; i++){
            cin >> num;
            s.insert(num);
        }
        cout << s.size() << endl;
    }
    return 0;
}
