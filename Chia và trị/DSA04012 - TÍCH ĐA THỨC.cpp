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

void run_case() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int &x : a)
        cin >> x;

    for (int &x : b)
        cin >> x;

    vector<int> res(n + m - 1, 0);

    FOR(i, 0, n - 1) {
        FOR(j, 0, m - 1) {
            res[i + j] += a[i] * b[j];
        }
    }

    for (int x : res)
        cout << x << ' ';
    cout << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;
    cin >> T;

    for (int test = 1; test <= T; test++) {

        run_case();
    }
    return 0;
}