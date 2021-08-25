#include <iostream>
#include <algorithm>
#include <set>
typedef long long int ll;
using namespace std;

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    string result =  "";
    if (n <= 3 && n > 1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    for (ll i = 1; i<=n; i++){
        if (i % 2 == 0){
            cout << i << " ";
        }
        else {
            result += to_string(i) + " ";
        }
    }
    cout << result;
    return 0;
}
