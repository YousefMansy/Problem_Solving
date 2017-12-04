//Accepted

#include <bits/stdc++.h>

#define ll long long int
#define MAX 3005

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("499B.in","r",stdin);
    int n, m;
    map<string,string> mp;
    cin >> n >> m;
    for(int i=0;i<m;i++){
    	string s1,s2;
    	cin >> s1 >> s2;
    	mp[s1]=s2;
    }
    for (int i = 0; i < n; ++i)
    {
    	string word;
    	cin >> word;
    	if(word.length()<=mp[word].length())
    		cout << word << " ";
    	else
    		cout << mp[word] << " ";
    }
    cout << endl;
    return 0;
}