#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n;
    cin >> n;
    map<int, int> mp;
    
    while (n--) {
        int x; cin >> x;
        mp[x]++;
    }
    
    int ans = 0;
    for (auto [a, b]: mp) ans = max(ans, b);
    
    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}