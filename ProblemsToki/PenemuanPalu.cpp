#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

typedef long long int ll;
using namespace std;

int main(int argc, char const *argv[])
{
    ll a, b;
    cin >> a >> b;
    if (a == b)
        return 0;
    if (a > b)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}
