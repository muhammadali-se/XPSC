#include bitsstdc++.h
using namespace std;
#define nl 'n'

void solution() {
    string a, b; cin  a  b;
    int n = a.size(), m = b.size();

    if(a[n-1] == b[m-1]) {
        if(a[n-1] == 'S') {
            if (a.size()  b.size()) cout  ''  nl;
            else if (a.size()  b.size()) cout  ''  nl;
            else cout  '='  nl;
        } else if(a[n-1] == 'L') {
            if(a.size()  b.size()) cout  ''  nl;
            else if(a.size()  b.size()) cout  ''  nl;
            else cout  '='  nl;
        }
        else cout  '='  nl;
        return;
    }

    if ((a[n-1] == 'M' && b[m-1] == 'S')  (a[n-1] == 'L' && b[m-1] == 'M')  (a[n-1] == 'L' && b[m-1] == 'S')) {
        cout  ''  nl;
    }
    else if ((a[n-1] == 'S' && b[m-1] == 'L')  (a[n-1] == 'M' && b[m-1] == 'L')  (a[n-1] == 'S' && b[m-1] == 'M')) {
        cout  ''  nl;
    }
    else cout  '='  nl;
}

int main() {
	iossync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin  t;
	while (t--) solution();
	
	return 0;
}