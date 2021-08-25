#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <array>
#include <cmath>
#include <list>
#define pi 3.14159265
#define pb push_back
#define mod 1000000007
#define mp make_pair
#define ff first
#define ss second
#define rep(i,a,b) for(ll i=a;i<b;i++)
typedef std::vector<long long> vl;
typedef std::pair<long long, long long> pl;
typedef long long int ll;
using namespace std;

int main(int argc, char const *argv[])
{
    ll n, m;
    cin >> n >> m;
    vector <ll> tickets(n);
    vector <ll> customers(m);
    set<pair<ll, ll> > sortedTickets;
    for (ll i = 0; i < n; i++){
        cin >> tickets[i];
        sortedTickets.insert(mp(tickets[i], i));
    }
    for (ll i = 0; i < m; i++)
        cin >> customers[i];
    for (ll i = 0; i < m; i++){
        auto match = sortedTickets.lower_bound(mp(customers[i]+1, 0));
        if (match == sortedTickets.begin()) cout << -1 << endl;
        else {
            match--;
            cout << (*match).first << endl;
            sortedTickets.erase(match);
        }
    }
    return 0;
}


// int main(int argc, char const *argv[])
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll n, m;
//     vector < ll > h, t;
//     vector < ll > ::iterator it;
//     cin >> n >> m;
//     ll a, b;
//     for (ll i = 0; i < n; i++){
//         cin >> a;
//         h.pb(a);
//         // sorting with vector 
//         sort(h.begin(), h.end());
//     }
//     for (ll i = 0; i < m; i++){
//         cin >> b;
//         t.pb(b);
//         // searching with lower_bound
//         auto match = lower_bound(h.begin(), h.end(), b);
//         if (match == h.begin()) cout << -1 << endl;
//         else {
//             match--;
//             cout << (*match).first << endl;

//         }
//         // binary_search(h.begin(), h.end(), b) ? cout << b  : cout << -1  << endl;

//     }
    
//     return 0;
// }
