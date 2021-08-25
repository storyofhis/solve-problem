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
// PRIME NUMBER TEST//
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
// Graph Grid //
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void solve(){
    ll t, a, ans = 0, res = 0, q = 0;
    for (ll i = 0; i < t; i++){
        cin >> a;
        if (a % 6 || a <= 6){
            ans = a / 6;
            res = ans * 15;
        }
        if (a % 8){
            ans = a / 8;
            res = ans * 20;
        }
        if (a % 10) {
            ans = a / 10;
            res = ans * 25;
        }
        cout << (q += res) << endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n<=10)
        {
            if(n<=6)cout<<15<<endl;
            else if(n<=8)cout<<20<<endl;
            else cout<<25<<endl;
        }
        else
        {
            ll ans=(n/10) * 25;
            ll m=n%10;
            if(m)
            {
                if(m==1 || m==2)ans+=5;
                else if(m<5)ans+=10;
                else if(m<=6)ans+=15;
                else if(m<=8)ans+=20;
                else ans+=25;
            }
            cout<<ans<<endl;
        }
    }
}