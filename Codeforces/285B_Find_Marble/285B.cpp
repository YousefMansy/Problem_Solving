//Accepted

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // freopen("285B.in","r",stdin);
    int n,s,t;
    cin >> n >> s >> t;
    vector<int> ar(n);
    vector<bool> vis;
    for (int i = 0; i < n; ++i)
    {
    	cin >> ar[i];
    }
    int next = ar[s-1];
    if(s==t)
    	cout << "0\n";
    else{
    	int step = 1;
    	while(next!=t){
    		if(next == s){
    			step = -1;
    			break;
    		}
    		next=ar[next-1];
    		step++;
    	}
    	cout << step << endl;
    }
    return 0;
}