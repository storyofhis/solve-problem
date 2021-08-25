#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cassert>
#include <set>
#include <map>
#include <array>
#include <list>
#define pb push_back
typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vl;
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    int b;
    cin>>a;
    while(a--){
        cin>>b;
        int now;
        int c;
        cin>>now;
        while(--b)
        {
            cin>>c;
            now = (now < (now & c)) ? (now) : (now & c);
        }
        printf("%d\n",now);
    }
    return 0;
}
