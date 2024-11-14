#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (mp.count(x) == 0) mp.insert({x, 1});
        else mp[x]++;
    }
    
    long long sum = 0;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        sum += mp[x];
    }
    
    cout << sum << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}