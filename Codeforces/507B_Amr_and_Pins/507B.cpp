//Accepted

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e6 + 5)

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // freopen("507B.in","r",stdin);
    int r,x1,y1,x2,y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    int diff1 = max(x1,x2)-min(x1,x2);
    int diff2 = max(y1,y2)-min(y1,y2);
    double num = ceil(sqrt(pow(diff1,2)+pow(diff2,2)));
    int sol = ceil(num / (r*2));
    cout << sol << endl;
    return 0;
}