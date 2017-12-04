//Solution in progress

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;

bool isPrime (int num)
{
    if (num <=1)
        return false;
    else if (num == 2)         
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<int>(sqrt(num_d) +1);
        
        while (divisor <= upperLimit){ 
            if (num % divisor == 0)
                prime = false;
            divisor +=2;
        }
        return prime;
    }
}

vector<int> primes;

void getPrimes(int n){
    for(int i=0;i<n;i++){
        if(isPrime(n-i)){
            primes.push_back(n-i);
        }
    }
}

void solve(int n){
    
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    freopen("584D.in","r",stdin);
    int n;
    cin >> n;
    getPrimes(n);
    cout << primes.size() << endl;
    for(int i=0;i<primes.size();i++)
        cout << primes[i] << " ";
    cout << endl;
    return 0;
}