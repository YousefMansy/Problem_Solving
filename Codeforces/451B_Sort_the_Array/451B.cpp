//Accepted

#include <bits/stdc++.h>
#define ll long long int
#define MAX (ll)(10e5 + 5)

using namespace std;

int n, ar[MAX], sortedAr[MAX];
bool match[MAX];

bool matchArray(int arr1[], int arr2[], int sz){
	for (int i = 0; i < sz; ++i){
		if(arr1[i] != arr2[i])
			return 0;
	}
	return 1;
}

void reverseArray( int array[], int startIndex, int stopIndex )
{
    for (int i = startIndex; i < (stopIndex / 2); i++) {
        int temporary = array[i];                 // temporary wasn't declared
        array[i] = array[(stopIndex - 1) - i];
        array[(stopIndex - 1) - i] = temporary;
    }
}

void printArray(int array[],int sz){
	for (int i = 0; i < sz; ++i)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // freopen("451B.in","r",stdin);
    cin >> n;
    for (int i = 0; i < n; ++i){
    	int temp;
    	cin >> temp;
    	ar[i] = sortedAr[i] = temp;
    }
    sort(sortedAr, sortedAr+n);
    int beg=-1, end=n;
    while(ar[--end] == sortedAr[end] && end!=0);
    while(ar[++beg] == sortedAr[beg] && !((beg+1)>end));
    // reverseArray(ar,beg,end+1);
    reverse(ar+beg,ar+end+1);
    // cout << beg+1 << " " << end+1 << endl; 
    // printArray(ar,n);
    if(matchArray(ar,sortedAr,n)){
    	cout << "yes\n" << beg+1 << " " << end+1 << endl;
    }
    else
    	cout << "no\n";
    return 0;
}