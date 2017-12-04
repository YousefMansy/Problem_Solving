//Accepted

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // freopen("478B.in","r",stdin);
    ll n,m,min,max;
    cin >> n >> m;
    max = ( (n-(m-1)) * ((n-(m-1))-1) )/ 2;
	min = (((( (n/m)*((n/m)-1) ) /2))*m) + (((n%m))*(n/m));
    cout << min << " " << max << endl;
    return 0;
}