#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    
    while (n--) {
        string a, b;
        cin >> a >> b;
        mp.insert({b, a});
    }
    
    while (m--) {
        string a, b;
        cin >> a >> b;
        cout << a << ' ' << b << ' ';
        b.pop_back();
        cout << '#' << mp[b] << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
