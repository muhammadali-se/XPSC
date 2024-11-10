#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int indx = 0;
        
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i-1]) {
                indx = i;
                break;
            }
        }
        
        if (s[indx] < 122) s.insert(s.begin()+indx, s[indx]+1);
        else s.insert(s.begin()+indx, s[indx]-1);
        
        cout << s << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
