//Accepted

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // freopen("508B.in","r",stdin);
    string s;
    cin >> s;
    bool found = 0;
    int idx = -1;
    char lastChar = s[s.length()-1];
    int lastDig = (int) (s[s.length()-1]-'0');
    for (int i = 0; i < s.length()-1; ++i)
    {
    	int temp = (int)(s[i]-'0');
    	if(!(temp%2)){
    		found = 1;
    		if(temp < lastDig){
    			idx = i;
    			break;
    		}
    		idx = i;
    	}
    }
    if(!found)
    	cout << -1 << endl;
    else{
    	s[s.length()-1] = s[idx];
    	s[idx]=lastChar;
    	cout << s << endl;
    }
    return 0;
}