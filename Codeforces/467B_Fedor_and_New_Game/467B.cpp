
//Accepted

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;

int countSetBits(int n){
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
 
int differentBitsCount(int a, int b){
    return countSetBits(a^b);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // freopen("467B.in","r",stdin);
    int n, m, k, fedor, num=0;
    cin >> n >> m >> k;
    vector<int> players;
    for(int i=0;i<m;i++){
    	int temp;
    	cin >> temp;
    	players.push_back(temp);
    }
    cin >> fedor;
    for(int i=0;i<m;i++){
    	if(differentBitsCount(fedor,players[i]) <= k)
    		num++;
    }
    cout << num << endl;
    return 0;
}