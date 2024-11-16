#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n, m;
    cin >> n >> m;
    multiset<int> ms;
    
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        ms.insert(x);
    }
    
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        ms.insert(x);
    }
    
    for (int val: ms) cout << val << ' ';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
