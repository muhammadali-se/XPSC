#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    string s;
    cin >> s;
    int frq[26] = {0};
    
    for (char c: s) frq[c-'a']++;
    
    for (int i = 0; i < 26; i++) {
        if (frq[i] == 0) {
            char c = i+'a';
            cout << c << nl;
            return;
        }
    }
    
    cout << "None\n" << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
