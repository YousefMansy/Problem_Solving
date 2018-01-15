//In Progress

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;


int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	// freopen("b.in","r",stdin);
	int n,pos,l,r,ret=0;
	cin >> n >> pos >> l >> r;
	int num = (r-l)+1;
	if(num==n){
		cout << 0 << endl;
		return 0;
	}
	if(pos<l){
		ret+=(l-pos)+1;
		if(r<n)
			ret += (r-l)+1;
	}else if(pos>r){
		ret+=(pos-r)+1;
		if(l>1)
			ret += (r-l)+1;
	}
	else{
		if(l==1){
			ret += (r-pos)+1;
		}
		else if(r==n){
			ret += (pos-l)+1;
		}
		else{
			int diff1 = r-pos, diff2 = pos-l;
			if(diff1<diff2){
				ret += diff1 + 1;
			}
			else{
				ret += diff2 + 1;
			}
			ret += (r-l) + 1;
		}
	}
	cout << ret << endl;
	return 0;
}