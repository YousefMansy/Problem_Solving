#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
            long long res = 1;
            while (s[0] == '?') {
                s = s.substr(1, s.length());
            }
            while (s[s.length() - 1] == '?') {
                s = s.substr(0, s.length() - 1);
            }
            bool in = false;
            char prev = ' ';
            int counter = 0;
            vector<int> vec;
            for (int i = 0; i < s.length(); i++) {
                if (in && s[i] != '?') {
                    if (s[i] != prev)
                        vec.push_back(++counter);
                    prev = ' ';
                    counter = 0;
                    in = false;
                } else if (!in && s[i] == '?') {
                    prev = s[i - 1];
                    in = true;
                    counter++;
                } else if (in && (s[i] == '?')) {
                    counter++;
                }
            }
            for (int &i : vec) {
                res *= i;
                res %= 1000000007;
            }
            cout << res << endl;
    }
    return 0;
}