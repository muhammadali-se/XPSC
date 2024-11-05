#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n, m;
    cin >> n >> m;
    int arr[n];
    
    for (int i = 1; i <= n; i++) cin >> arr[i];
    
    vector<int> cnt(n+1);
    set<int> s;
    
    for (int i = n; i >= 1; i--) {
        s.insert(arr[i]);
        cnt[i] = s.size();
    }
    
    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        cout << cnt[x] << nl;
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}