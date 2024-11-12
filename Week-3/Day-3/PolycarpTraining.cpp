#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n;
    cin >> n;
    multiset<int> ms;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }
    
    int ans = 0, problems = 1;
    
    while (!ms.empty()) {
        auto LB = ms.lower_bound(problems);
        
        if (LB == ms.end()) break;
        else {
            ans++;
            ms.erase(LB);
        }
        
        problems++;
    }
    
    cout << ans << nl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
