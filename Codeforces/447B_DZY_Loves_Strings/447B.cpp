//Accepted

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // freopen("447B.in","r",stdin);
    set<int> st;
    map<char,int> mp;
    string s;
    int k, sum=0;
    cin>>s;
    cin>>k;
    for (int i = 0; i < 26; ++i){
    	int temp;
    	cin >> temp;
    	mp['a'+i] = temp;
    	st.insert(temp);
    }
    for (int i = 0; i < s.length(); ++i)
    {
    	sum+=mp[s[i]]*(i+1);
    }
    int len = s.length();
    for (int i = 0; i < k; ++i)
    {
    	sum+= *(--st.end()) * ++len; 
    }
    cout << sum << endl;
    return 0;
}