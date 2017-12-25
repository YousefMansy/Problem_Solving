//Accepted

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;

int mod (int a){
	int ans = a % 1000000007;
	if(ans < 0)
		ans+=1000000007;
	return ans;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    freopen("450B.in","r",stdin);
    int x,y,n,ar[6];
    cin >> x >> y >> n;
    ar[0] = x;
    ar[1] = y;
    ar[2] = ar[1]-ar[0];
    ar[3] = ar[2]-ar[1];
    ar[4] = ar[3]-ar[2];
    ar[5] = ar[4]-ar[3];
    cout << mod(ar[((n-1)%6)]) << endl;
    return 0;
}