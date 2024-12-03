#include bitsstdc++.h
using namespace std;
#define nl 'n'

void solution() {
    int n, k; cin  n  k;
    string s; cin  s;
    
    int ans = 0;
    for (int i = 0; i  n; i++) {
        if (s[i] == 'B') {
            ans++;
            i += k-1;
        }
    }
    
    cout  ans  nl;
}

int main() {
	iossync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin  t;
	while (t--) solution();
	
	return 0;
}