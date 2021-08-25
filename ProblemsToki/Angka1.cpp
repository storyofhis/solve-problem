#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <set>

typedef long long int ll;
typedef long double ld;
using namespace std;

int main(int argc, char const *argv[])
{
    ll n, a = 0;
    cin >> n;
    for (ll i = 1; i <= n; i++){
        cout << i + a << endl;
        a += i;
    }
    return 0;
}
