//In Progress

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    freopen("259B.in","r",stdin);
    int ar[3][3];
    for (int i = 0; i < 3; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		cin >> ar[i][j];
    	}
    }
	int save = -1;
	for (int i = 1; i <= 9; ++i)
	{
		if((ar[0][1]+ar[0][2]+i)==(ar[1][0]+ar[2][0]+i)){
			save = i;
			break;
		}
	}
	cout << save << endl;
    return 0;
}