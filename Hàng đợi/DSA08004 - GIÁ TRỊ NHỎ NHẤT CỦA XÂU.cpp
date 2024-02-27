#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (auto i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (auto i = (a); i >= (b); --i)
#define sz(x) (int)(x).size()
#define pb push_back
#define ppb pop_back
#define endl '\n'
#define fi first
#define se second

#ifdef Juhan404
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;
using pii = pair<int, int>;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int k;
string s;

void run_case() {
    cin >> k >> s;

    map<char, ll> mp;
    for (char c : s)
        ++mp[c];

    priority_queue<ll> pq;
    for (auto x : mp)
        pq.push(x.se);

    while (k--) {
        ll x = pq.top();
        pq.pop();

        pq.push(x - 1);
    }

    ll res = 0;
    while (!pq.empty()) {
        ll x = pq.top();
        pq.pop();

        res += x * x;
    }

    cout << res << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;
    cin >> T;

    for (int test = 1; test <= T; ++test) {

        run_case();
    }
    return 0;
}