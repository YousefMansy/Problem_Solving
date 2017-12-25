//Accepted

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // freopen("448B.in","r",stdin);
    string s,t;
    int ar[26] = {0} , ar2[26] = {0};
    cin >> s >> t;
    for (int i = 0; i < s.length(); ++i)
    {
    	ar[s[i]-'a']++;
    }
    for (int i = 0; i < t.length(); ++i)
    {
    	ar2[t[i]-'a']++;		
    }
    int prev=-1;
    bool automaton, tree, array, both;
    automaton = tree = array = both = 0;
    if(s.length()!=t.length())
    	automaton=1;
    if(s.length()<t.length())
    	tree=1;
    else{
	    for (int i = 0; i < t.length(); ++i)
	    {
	    	if(ar[t[i]-'a']==0 || ar2[t[i]-'a']>ar[t[i]-'a']){
	    		tree = 1; break;
	    	}
	    }
	}
    if(tree)
    	cout << "need tree\n";
    else{
    	array = 1;
    	for (int i = 0; i < t.length(); ++i)
    	{
    		if(ar[t[i]-'a']<ar2[t[i]-'a']){
    			array = 0;
    			break;
    		}
    	}
    	if(array)
        {
            array=0;
            for(int i=0;i<t.length();i++)
            {
                if(s[i]!=t[i])
                {
                    s.erase(i,1);
                    i--;
                    if(s.length()<t.length())
                    {
                        array=1;
                        break;
                    }
                }
                
            }
        }
	    if (automaton && array)
	    	cout << "both\n";
	    else if(array)
	    	cout << "array\n";
	    else if(automaton)
	    	cout << "automaton\n";
    	else
    		cout << "need tree\n";
    }
    return 0;
}