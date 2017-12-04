//Accepted

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // freopen("339B.in","r",stdin);
    int n, m;
    ll counter=0,current=1;
    cin >> n >> m;
    vector<ll> tasks;
    for (int i = 0; i < m; ++i){
    	ll temp;
    	cin >> temp;
    	tasks.push_back(temp);
    }
    for (int i = 0; i < m; ++i){
    	if(tasks[i]>=current){
    		counter+=(tasks[i]-current);
    	}
    	else{
	    	counter+=((n-current)+tasks[i]);
	    }
		current = tasks[i];
    }
    cout << counter << endl;
    return 0;
}