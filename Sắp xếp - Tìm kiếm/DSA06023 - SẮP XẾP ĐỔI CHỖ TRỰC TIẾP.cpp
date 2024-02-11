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
    int n;
    cin >> n;

    int a[n + 1];
    FOR(i, 1, n) {
        cin >> a[i];
    }

    FOR(i, 1, n - 1) {
        cout << "Buoc " << i << ": ";

        FOR(j, i + 1, n) {
            if (a[i] > a[j])
                swap(a[i], a[j]);
        }

        FOR(i, 1, n) {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;

    for (int test = 1; test <= T; test++) {

        run_case();
    }
    return 0;
}