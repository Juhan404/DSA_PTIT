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

int n, k, a[25], check = 0;

void back_track(int start, int cur_sum, string s) {
    if (cur_sum == k) {
        check = 1;
        s.ppb();
        s += "]";
        cout << s;
        return;
    }
    else if (cur_sum < k) {
        FOR(i, start, n) {
            back_track(i, cur_sum + a[i], s + to_string(a[i]) + " ");
        }
    }
}

void run_case() {
    cin >> n >> k;
    FOR(i, 1, n) {
        cin >> a[i];
    }

    back_track(1, 0, "[");

    if (!check)
        cout << -1;
    cout << endl;

    check = 0;
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