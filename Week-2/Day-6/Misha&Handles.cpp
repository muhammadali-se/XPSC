#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solution() {
    int q;
    cin >> q;
    map<string, string> mp;
    
    while (q--) {
        string Old, New;
        cin >> Old >> New;
        bool flag = true;
        
        for (auto& it: mp) {
            if (it.second == Old) {
                flag = false;
                it.second = New;
            }
        }
        
        if (flag) mp.insert({Old, New});
    }
    
    cout << mp.size() << nl;
    for (auto it: mp) cout << it.first << ' ' << it.second << nl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solution();
	return 0;
}
