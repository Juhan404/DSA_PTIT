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

int n, k, a[15][15];
bool hang[15], cot[15];
vector<string> v;

void back_tracking(int h, int cur_sum, string res) {
    if (cur_sum == k && h == n + 1) {
        v.pb(res);
        return;
    }

    hang[h] = true;

    FOR(j, 1, n) {
        if (!cot[j] && cur_sum + a[h][j] <= k) {
            cot[j] = true;

            back_tracking(h + 1, cur_sum + a[h][j], res + to_string(j) + ' ');

            cot[j] = false;
        }
    }

    hang[h] = false;
}

void run_case() {
    cin >> n >> k;
    FOR(i, 1, n)
    FOR(j, 1, n)
    cin >> a[i][j];

    back_tracking(1, 0, "");

    cout << sz(v) << endl;
    for (string s : v)
        cout << s << endl;
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