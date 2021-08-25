#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
typedef long long int ll;
typedef long double ld;

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    if (n == 2 || n == 3 || n == 5)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}
