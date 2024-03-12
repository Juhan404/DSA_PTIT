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

int n, s, res = 1e9;
int a[35];

void back_tracking(int index, int remain, int cnt) {
    if (remain == 0) {
        res = min(res, cnt);
        return;
    }

    if (remain < 0 || index > n || cnt > res)
        return;

    back_tracking(index + 1, remain, cnt);
    back_tracking(index + 1, remain - a[index], cnt + 1);
}

void run_case() {
    res = 1e9;

    cin >> n >> s;
    FOR(i, 1, n) {
        cin >> a[i];
    }

    sort(a + 1, a + n + 1, greater<int>());

    back_tracking(1, s, 0);

    cout << (res == 1e9 ? -1 : res) << endl;
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