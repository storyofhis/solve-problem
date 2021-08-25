#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

typedef long long int ll;
using namespace std;

int main(int argc, char const *argv[])
{
    ll a;
    cin >> a;
    ll sum = 0;
    for (int i = 1; i <= a; i++){
        sum += i * i;
    }
    cout << sum << endl;
    return 0;
}
