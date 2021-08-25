#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <cmath>
using namespace std;
typedef long  long int ll;
typedef long double ld;
typedef vector <ll> vl;
void solve(){
    int n;
    cin>>n;
    int total=0;
    int num=1;
    while(n>0){
        total++;
        n-=num;
        num+=2;
    }
    cout<<total<<"\n";
}
int main(int argc, char const *argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
