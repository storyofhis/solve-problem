#include <iostream>
#include <algorithm>
#include <set>
typedef long long int ll;
using namespace std;
int main(int argc, char const *argv[])
{
    ll pre, steps = 0, in, n;
    cin >> n >> pre;
    while (--n > 0){
        cin >> in;
        if (pre > in){
            steps += pre - in;
        }else {
            pre = in;
        }
    }
    cout << steps << endl;
    return 0; 
}
