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

int n, a[20];
vector<int> v;
vector<vector<int>> res;

void back_tracking(int start, int cur_sum) {
    if (cur_sum & 1)
        res.pb(v);
    if (start > n)
        return;
    FOR(i, start, n) {
        v.pb(a[i]);
        back_tracking(i + 1, cur_sum + a[i]);
        v.pop_back();
    }
}

void run_case() {
    cin >> n;
    FOR(i, 1, n)
    cin >> a[i];

    sort(a + 1, a + n + 1, greater<int>());

    back_tracking(1, 0);

    sort(res.begin(), res.end());

    for (auto x : res) {
        for (int k : x)
            cout << k << ' ';
        cout << endl;
    }

    res.clear();
    v.clear();
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