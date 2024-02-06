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
	ll n;
	string s;
	cin >> n >> s;

	map <char, ll> mp;
	for (char c : s) ++mp[c];

	priority_queue <ll> pq;
	for (auto x : mp) pq.push(x.se);

	while (n--) {
		ll temp = pq.top();
		pq.pop();

		if (temp) --temp;

		pq.push(temp);
	}

	ll res = 0;

	while (!pq.empty()) {
		ll temp = pq.top();

		res += temp * temp;

		pq.pop();
	}

	cout << res << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);

#ifdef Juhan404
	freopen("Error.txt", "w", stderr);
#endif

	int test = 1;
	cin >> test;

	for (int tc = 1; tc <= test; tc++) {
		// cout << "Test #" << tc << ": ";
		run_case();
	}
	return 0;
}