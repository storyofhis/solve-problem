#include <iostream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <cmath>

typedef long long int ll;
typedef long double ld;
using namespace std;

int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--){
        ll n, up = 0;
        cin >> n;
        ll arr[n+3];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            if (arr[i] == 1){
                up += 1;
            }else if (arr[i] == 2){
                up += -1;
            }else if (arr[i] == 3){
                if (arr[i-1] == 0)
            }
        }
    }
    return 0;
}
