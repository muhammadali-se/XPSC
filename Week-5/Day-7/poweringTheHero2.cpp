#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        map<char, char> mp;
        
        for (char c: s) mp[c] = c;
        
        string newS = "";
        for (auto it = mp.rbegin(); it != mp.rend(); it++) newS += it->second;
        
        auto it = newS.begin();
        for (auto& [a, b]: mp) {
            b = *it;
            it++;
        }
        
        for (char c: s) cout << mp[c];
        cout << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}