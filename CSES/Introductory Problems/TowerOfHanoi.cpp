#include <iostream>
#include <stack>
#include <map>
#include <vector>
#include <cmath>
using namespace std;
typedef long long int ll;
void towerOfHanoi (ll left, ll mid, ll right, ll n){
    if (n == 0)  
        return;
    towerOfHanoi(left, right, mid, n-1);
    cout << left << " " << right << endl;
    towerOfHanoi(mid,left, right, n-1);
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    while (t--){
        ll n;
        cin >> n;
        cout << (1 << n) - 1 << endl;
        towerOfHanoi (1,2,3, n); 
    }
    return 0;
}
