#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    set<string> st;
    
    while (t--) {
        string s;
        cin >> s;
        
        if (st.find(s) != st.end()) cout << "YES" << nl;
        else {
            st.insert(s);
            cout << "NO" << nl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
