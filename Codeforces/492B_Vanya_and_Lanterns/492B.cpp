//Accepted

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // freopen("492B.in","r",stdin);
    int n, l;
    bool beg=0,end=0;
    double res = 0;
    vector<int> lanterns;
    vector<int> dists;
    cin >> n >> l;
    for(int i=0;i<n;i++){
    	int temp;
    	cin >> temp;
    	if(temp==0)
    		beg = 1;
    	if(temp == l)
    		end = 1;
    	lanterns.push_back(temp);
    }
    sort(lanterns.begin(), lanterns.begin()+n);
    double maxDist = 0;
    for (int i = n-1; i > 0; i--){
    	maxDist = max(lanterns[i]-lanterns[i-1],(int)maxDist);
	}
    res = max( (maxDist/2.0), (double)max(lanterns[0], (l - lanterns[n-1]) ));
    cout << setprecision(50) << res << endl;
    return 0;
}