#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
typedef long long int ll;
typedef long double ld;
using namespace std;
bool isPrime (ll n){
    if (n < 2)
        return false;
    for (ll i = 2; i < n; i++){
        if (n % i == 0) return false;
    }
    return true;
}
int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    if (isPrime(n)){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    return 0;
}
