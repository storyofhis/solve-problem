#include <iostream>
#include <cmath>
using namespace std;
typedef long long int ll;

int main(int argc, char const *argv[])
{
    ll n, b;
    cin >> n;
    for (ll i = 0; i < pow(n,2); i++)
        for (ll j = 0; j < pow(n,2); j++)
            cin >> b;
        
    ll result = (pow(n,2) + 1) * (pow(n,2) / 2);
    cout << result << endl;
    return 0;
}
