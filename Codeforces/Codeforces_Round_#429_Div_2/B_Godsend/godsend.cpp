#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    freopen("godsend.in","r",stdin);
    int n;
    cin >> n;
    vector<int> ar;
    bool found = 0;
    for(int i =0;i<n;i++){
        int x;
        cin >> x;
        ar.push_back(x);
        if(ar[i]%2){
            cout << "First\n";
            found = 1;
            break;
        }
    }
    if(!found)
        cout << "Second\n";

    return 0;
}