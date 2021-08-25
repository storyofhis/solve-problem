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
    ll n, k;
    cin >> n >> k;
    n++;
    ll x = (n-1) / k;
    cout << (n-x) << endl;
    return 0;
}
