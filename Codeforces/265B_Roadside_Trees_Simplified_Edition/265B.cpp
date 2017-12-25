//Accepted

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // freopen("265B.in","r",stdin);
    int n,sum=0;
    cin >> n;
    vector<int> ar(n);
    cin >> ar[0];
    sum += ar[0];
 	for (int i = 1; i < n; ++i){
 		cin >> ar[i];
 		sum+=abs(ar[i]-ar[i-1]);
 	}   
 	cout << sum+(n-1)+n << endl;
    return 0;
}