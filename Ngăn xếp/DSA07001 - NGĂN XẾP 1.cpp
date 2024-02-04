#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (auto i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (auto i = (a); i >= (b); --i)
#define sz(x) (int) (x).size()
#define pb push_back
#define endl '\n'
#define fi first
#define se second

#ifdef Juhan404
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;
using pii = pair <int, int>;

const ll INF = 1e9 + 69;
const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 5;

void run_case() {
	string s;
	stack <int> st;

	while (cin >> s) {
		if (s == "push") {
			int n;
			cin >> n;

			st.push(n);
		}
		else if (s == "pop") {
			st.pop();
		}
		else {
			if (st.empty()) cout << "empty\n";
			else {
				vector <int> v;

				while (!st.empty()) {
					int temp = st.top();
					v.pb(temp);
					st.pop();
				}

				reverse(v.begin(), v.end());

				for (int x : v) {
					cout << x << ' ';
					st.push(x);
				}
				cout << endl;
			}
		}
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);

#ifdef Juhan404
	freopen("Error.txt", "w", stderr);
#endif

	int test = 1;
	// cin >> test;

	for (int tc = 1; tc <= test; tc++) {
		// cout << "Test #" << tc << ": ";
		run_case();
	}
	return 0;
}