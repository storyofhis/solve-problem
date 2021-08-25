#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <array>
#include <cmath>
#include <list>

using namespace std;
typedef long long int ll;

ll findminans(ll *arr,ll currsum,ll totalsum,ll i){
    if (i==0)
        return abs((totalsum-currsum) - currsum);
    return min(findminans(arr,currsum+arr[i],totalsum,i-1),findminans(arr,currsum,totalsum,i-1));
}
int main(int argc, char const *argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    ll *arr=new ll[n];
    ll totalsum=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        totalsum+=arr[i];
    }
    cout<<findminans(arr,0,totalsum,n-1)<<endl;
    return 0;
}