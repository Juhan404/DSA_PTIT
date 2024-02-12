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

vector<ll> v;

void back_track(string s) {
    if (sz(s) == 18)
        v.push_back(stoll(s));
    else {
        back_track(s + '0');
        back_track(s + '1');
    }
}

void run_case() {
    ll n;
    cin >> n;

    FOR(i, 1, sz(v) - 1) {
        if (v[i] == n) {
            cout << i << endl;
            return;
        }
        else if (v[i] > n) {
            cout << i - 1 << endl;
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

    back_track("");

    for (int test = 1; test <= T; test++) {

        run_case();
    }
    return 0;
}