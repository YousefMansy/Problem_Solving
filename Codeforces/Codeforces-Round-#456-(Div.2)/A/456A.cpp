//In Progress

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // freopen("456A.in","r",stdin);
	ll A,B;
    cin >> A >> B;
    ll x,y,z,sum1,sum2,sum3=0;
    cin >> x >> y >> z;
    sum1 = (2*x) + y;
    sum2 = (3*z) + y;
    if(sum1 > A)
    	sum3+= sum1-A;
    if(sum2 > B)
    	sum3+= sum2-B;
    cout << sum3 << endl;
    return 0;
}