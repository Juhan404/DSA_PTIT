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

int n, k, s, cnt = 0, x[15];

void back_tracking(int i) {
    FOR(j, x[i - 1] + 1, n) {
        x[i] = j;

        if (i == k) {
            int tong = 0;
            FOR(t, 1, k)
            tong += x[t];
            if (tong == s)
                ++cnt;
        }
        else
            back_tracking(i + 1);
    }
}

void run_case() {
    while (true) {
        cin >> n >> k >> s;

        if (!n && !k && !s)
            return;

        FOR(i, 1, k)
        x[i] = i;

        back_tracking(1);

        cout << cnt << endl;
        cnt = 0;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

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