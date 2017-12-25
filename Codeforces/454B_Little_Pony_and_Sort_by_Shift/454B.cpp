//Accepted

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // freopen("507B.in","r",stdin);
    int n;
    vector<int> ar, sortedAr;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
    	int x;
    	cin >> x;
    	ar.push_back(x);
    	sortedAr.push_back(x);
    }
    sort(sortedAr.begin(),sortedAr.end());
    int ix = 0;
    bool possible = true;
    for (; ix<n; ++ix){
    	if(ix!=0 && ar[ix-1]==ar[ix])
    		continue;
    	if(ar[ix]==sortedAr[0]){
			possible = true;
    		// cout << ix << endl;
		    for (int i = ix, j=0; j<n; ++i,j++)
		    {
		    	int temp = i;
		    	if(temp >= n)
		    		temp -= n;
		    	if(sortedAr[j]!=ar[temp]){
		    		possible = false;
		    		break;
		    	}
		    }
		    if(possible)
		    	break;
    	}
	}
    if(possible){
    	if(ix==0)
    		cout << 0 << endl;
    	else
	    	cout << n-ix << endl;
	}
    else
    	cout << -1 << endl; 
    return 0;
}