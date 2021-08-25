#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
typedef long long int ll;
typedef long double ld;
using namespace std;

int main(int argc, char const *argv[])
{
    int hr,min;
    float x,y;
    scanf("%d %d", &hr , &min );
    x = min/(float)5;
    if(x>hr){
        y = ((x-hr)*30) - (min/(float)2);
        printf("%0.7f",y);
    }
    if(x<hr){
        y = ((x+12-hr)*30) - (min/(float)2);
        printf("%0.7f",y);
    }
}
