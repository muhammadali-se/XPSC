#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<pair<char, int>> lc, uc;
        vector<char> res(s.size());
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'b' && !lc.empty()) lc.pop_back();
            else if (s[i] == 'B' && !uc.empty()) uc.pop_back();
            else if (s[i] != 'b' && s[i] != 'B') {
                if (s[i] >= 97) lc.push_back({s[i], i});
                else uc.push_back({s[i], i});
            }
        }
        
        for (auto [a, b]: uc) res[b] = a;
        for (auto [a, b]: lc) res[b] = a;
        
        for (char c: res) {
            if (c != '\0') cout << c;
        }
        cout << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
