#include <iostream>
#include <cmath>
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++){
        ll totalPosition = ((i*i) * ((i*i)-1))/2;
        ll attackPositions = 4 * (i-1) * (i-2);
        cout << totalPosition - attackPositions << endl;
    }
    return 0;
}
