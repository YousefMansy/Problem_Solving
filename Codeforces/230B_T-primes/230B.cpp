//Accepted

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;

vector<ll> tPrimes;	
bool prime[MAX];

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
   memset(prime, true, sizeof(prime));
 
    for (ll p=2; p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
        	// cout << p << " ";
        	tPrimes.push_back((ll)pow(p,2));
            // Update all multiples of p
            for (ll i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}

bool binary_search(const vector<ll>& vec, ll key) {
   ll mid, left = 0 ;
   ll right = vec.size();
   while (left < right) {
      mid = left + (right - left)/2;
      if (key > vec[mid]){
          left = mid+1;
      }
      else if (key < vec[mid]){                                        
        right = mid;
      }
      else if(key==vec[mid]){                                                                  
        return true;
     }                                                                                                               
   }
   return false;      
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    freopen("230B.in","r",stdin);
    SieveOfEratosthenes(10e6);
    int n;
    cin >> n;
    // cout << prime[999983] << endl << (ll)pow(999983,2); 
    for (int i = 0; i < n; ++i){
    	ll x;
    	cin >> x;
    	string ret = "NO\n";
    	// cout << *(--tPrimes.end()) << endl;
    	if(x < tPrimes[tPrimes.size()-1])
    		if(binary_search(tPrimes, x))
    			ret = "YES\n";
	    	// for (int i = tPrimes.size()-1; i >=0; --i)
	    	// {
	    	// 	// cout << tPrimes[i] << " ";
	    	// 	if(tPrimes[i] == x){
	    	// 		ret = "YES\n";
	    	// 		break;
	    	// 	}
	    	// }
    	cout << ret;
    }
    return 0;
}