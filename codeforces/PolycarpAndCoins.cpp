#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
typedef long long int ll;
using namespace std;
int main(int argc, const char** argv) {
    ll t;
    cin >> t;
    while (t--){
        ll n, ans = 0;
        cin >> n;
        int z=n/3;
        int x=n%3;
        int ans1=z;
        int ans2=z;
        if (x == 1) ans1++;
        if (x == 2) ans2++;
        cout << ans1 << " " << ans2 << endl;
    }    
    return 0;
}