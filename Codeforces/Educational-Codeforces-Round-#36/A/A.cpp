//In Progress

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;

vector<int> ar;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    freopen("A.in","r",stdin);
    int n,k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
    	int x;
    	cin >> x;
    	ar.push_back(x);
    }
    sort(ar.begin(),ar.end());
    for (int i = n-1; i >= 0; --i)
    {
    	if(k%ar[i] == 0){
    		cout << k/ar[i] << endl;
    		break;
    	}
    }
    return 0;
}