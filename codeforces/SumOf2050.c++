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

// PRIME NUMBER TEST//
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

// Graph Grid //
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

using namespace std;
int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    while (n--){
        
    }
    return 0;
}
