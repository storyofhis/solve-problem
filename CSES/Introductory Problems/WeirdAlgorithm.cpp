#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n; 
    cin >> n;
    cout << n << " ";
    while (n != 1){
        if(n%2) n= n*3+1;
        else n/=2;
        cout << n << " ";
    }
    return 0;
}
