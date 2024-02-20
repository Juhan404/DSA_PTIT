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

int a[1005];

void run_case() {
    int n, k;
    cin >> n >> k;

    FOR(i, 1, k) {
        cin >> a[i];
    }

    int i = k;
    while (i >= 1 && a[i] == a[i - 1] + 1)
        --i;

    if (i == 0) {
        FOR(j, 1, k) {
            cout << n - k + j << ' ';
        }
    }
    else {
        --a[i];
        FOR(j, i + 1, k) {
            a[j] = n - k + j;
        }
        FOR(i, 1, k) {
            cout << a[i] << ' ';
        }
    }
    cout << endl;
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