//AC

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;

ll vecToNum(vector<int> v){
	int sz = v.size(),i=0;
	ll ret=0;
	do{
		ret += v[i]*(pow(10,v.size()-i-1));
	}while(++i<v.size());
	return ret;
}

bool cmp (int i,int j) { return (i>j); }

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	// freopen("C.in","r",stdin);
	string a,b;
	cin >> a >> b;
	int sza = a.length(), szb = b.length();
	vector<int> av;
	vector<int> bv;
	for (int i = 0; i < sza; ++i)
	{
		av.push_back(a[i]-'0');
	}
	for (int i = 0; i < szb; ++i)
	{
		bv.push_back(b[i]-'0');
	}
	sort(av.begin(),av.end(),cmp);
	if(sza<szb || vecToNum(av)<=vecToNum(bv)){
		cout << vecToNum(av) << endl;
		return 0;
	}
	for (int i = 0; i < sza; ++i){
		for (int j = i; j < sza; ++j){
			if(i==sza-1 && av[i]==0)
				continue;
			sort(av.begin()+i,av.end(),cmp);
			swap(av[i],av[j]);
			sort(av.begin()+i+1,av.end());
			if(vecToNum(av)<=vecToNum(bv))
				break;
		}
	}
	// cout << vecToNum(av) << " " << vecToNum(bv) << endl;
	for (int i = 0; i < sza; ++i)
	{
		cout << av[i];
	}
	cout << endl;
	// cout << vecToNum(av) << endl;
	return 0;
}