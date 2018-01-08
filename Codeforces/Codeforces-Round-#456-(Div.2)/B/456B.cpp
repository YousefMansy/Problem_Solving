//In Progress

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;

ll calc(ll x) {
	switch (x%4) {
		case 0: return 0;
		case 1: return x - 1;
		case 2: return 1;
		default: return x;
	}
}

int bitcount(ll num) {
     int count = 0;
     static int nibblebits[] =
          {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};
     for(; num != 0; num >>= 4)
          count += nibblebits[num & 0x0f];
     return count;
}

int main(){
	// freopen("456B.in","r",stdin);
	ll n,k;
	int x;
    cin>>n>>k;
    if(k==1){
		cout<<n;
		return 0;	
	}
	// x = bitcount(n);
	x=127;
    while(!((n>>x)&1)){
    	x--;
    	// cout << x << endl;
    }
    cout<<((1ll<<(x+1))-1)<<endl;
	return 0;
}