#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (auto i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (auto i = (a); i >= (b); --i)
#define sz(x) (int)(x).size()
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
using pii = pair<int, int>;

const ll INF = 1e9 + 69;
const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 5;

int k, n, a[20], x[20];

void in() {
    FOR(i, 1, k)
    cout << a[x[i]] << ' ';
    cout << endl;
}

void back_tracking(int i) {
    FOR(j, x[i - 1] + 1, n - k + i) {
        x[i] = j;
        if (i == k)
            in();
        else
            back_tracking(i + 1);
    }
}

void run_case() {
    cin >> n >> k;
    FOR(i, 1, n)
    cin >> a[i];

    sort(a + 1, a + n + 1);

    back_tracking(1);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

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