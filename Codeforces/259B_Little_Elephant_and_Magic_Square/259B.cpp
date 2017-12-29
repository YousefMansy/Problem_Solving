//In Progress

#include <bits/stdc++.h>

#define ll long long int
#define MAX (ll)(10e5 + 5)

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // freopen("259B.in","r",stdin);

    int ar[3][3], sum = 0;

    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            cin >> ar[i][j];
            sum += ar[i][j];
        }
    }

    sum/=2;

    ar[0][0] = sum - (ar[0][1]+ar[0][2]);
    ar[1][1] = sum - (ar[1][0]+ar[1][2]);
    ar[2][2] = sum - (ar[2][0]+ar[2][1]);

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cout << ar[i][j] << " ";
        cout << "\n";
    }

    return 0;
}


//AC Bruteforce
/*
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // freopen("259B.in","r",stdin);
    int ar[3][3];

    for (int i = 0; i < 3; ++i)
    {
    	for (int j = 0; j < 3; ++j)
    	{
    		cin >> ar[i][j];
    	}
    }

    int lim1 = ar[0][1]+ar[0][2];
    int lim2 = ar[2][0]+ar[2][1];

    vector<int> possible;

    for (int i = 1; i <= 100000; ++i)
    {
        if(ar[0][2]+ar[2][0]+i == ar[0][1]+ar[2][1]+i
            && ar[0][1]+ar[2][1]+i == ar[1][0]+ar[1][2]+i
                && ar[1][0]+i+ar[1][2] > lim1 
                    && ar[1][0]+i+ar[1][2] > lim2 ){
            possible.push_back(i);
        }
    }

    for (int i = 0; i < possible.size(); ++i)
    {
        int sum = ar[1][0]+possible[i]+ar[1][2];

        int x = sum - (ar[0][1]+ar[0][2]);
        int y = sum - (ar[2][0]+ar[2][1]);

        if(x + y + possible[i] == sum){
            ar[0][0] = x;
            ar[1][1] = possible[i];
            ar[2][2] = y;
            for (int t = 0; t < 3; ++t)
             {
                for (int j = 0; j < 3; ++j)
                {
                    cout << ar[t][j] << " ";
                }
                cout << "\n";
            }
            break;
        }
    }

    return 0;
}*/