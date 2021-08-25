#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
typedef long long int ll;
typedef long double ld;
using namespace std;

int main(int argc, char const *argv[])
{
    ll r, l;
    cin >> r >> l;
    ll sum = 0;
    for (ll i = r; i <= l; i++ ){
        sum++;
    }
    cout << sum-1 << endl;
    return 0;
}
