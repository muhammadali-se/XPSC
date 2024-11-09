#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int n;
    cin >> n;
    map<string, int> mp;
    
    while (n--) {
        string s;
        cin >> s;
        if (mp.count(s) == 0) {
            mp.insert({s, 0});
            cout << "OK" << nl;
        } else {
            mp[s]++;
            cout << s << mp[s] << nl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
