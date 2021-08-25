#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <array>
typedef long long int ll;
typedef long double ld;
using namespace std;
const int mod = 1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    int total=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        total+=x;
    }
    if (total == n) cout<<0<<endl;
    else if (total < n) cout<<1<<endl;
    else cout<<(total - n)<<endl;
    
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; 
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
