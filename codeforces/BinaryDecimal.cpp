#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <array>
#include <algorithm>
typedef long long int ll;
typedef long double ld;
using namespace std;
const int mod = 1e9+7;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin>>n;
 
        int x=0;
 
        while(n>0)
        {
            int a = n % 10;
            x = max(x, a);
            n = n/10;
        }
        cout<<x<<"\n";
    }
    return 0;
}
