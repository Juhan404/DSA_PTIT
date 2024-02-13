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

map<ll, ll> F;

ll fib(ll n) {
    if (F.count(n))
        return F[n];

    ll k = n / 2;

    if (n & 1)
        return F[n] = (fib(k) * fib(k - 1) + fib(k) * fib(k + 1)) % MOD;
    else
        return F[n] = (fib(k) * fib(k) + fib(k - 1) * fib(k - 1)) % MOD;
}

void run_case() {
    ll n;
    cin >> n;

    cout << (n == 0 ? 0 : fib(n - 1)) << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;
    cin >> T;

    F[0] = F[1] = 1;

    for (int test = 1; test <= T; ++test) {

        run_case();
    }
    return 0;
}