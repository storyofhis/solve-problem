#include <iostream>
#include <algorithm>
#include <set>
typedef long long int ll;
using namespace std;

int main(int argc, char const *argv[])
{
    string kata;
    cin >> kata;
    int c = 1, ans = 1;

    for (int i = 1; i < kata.size(); i++){
        if (kata[i] == kata[i-1]){
            c++;
        }
        else {
            c = 1;
        }
        ans = max(c, ans);
        
    }
    cout << ans;
    return 0;
}
