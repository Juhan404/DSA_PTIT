#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (auto i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (auto i = (a); i >= (b); --i)
#define sz(x) (int)(x).size()
#define pb push_back
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

vector<ll> dat09;

void back_tracking(int t, string s) {
    if (sz(s) == t)
        dat09.pb(stoll(s));
    else {
        back_tracking(t, s + '0');
        back_tracking(t, s + '9');
    }
}

void run_case() {
    int n;
    cin >> n;

    for (ll x : dat09) {
        if (x != 0 && x % n == 0) {
            cout << x << endl;
            return;
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;
    cin >> T;

    FOR(i, 1, 10) {
        back_tracking(i, "");
    }

    for (int test = 1; test <= T; test++) {

        run_case();
    }
    return 0;
}