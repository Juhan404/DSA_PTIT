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

int k;
string s, max_res;

void back_tracking(int k, string s, string &max_res) {
    if (k == 0)
        return;
    FOR(i, 0, sz(s) - 2) {
        FOR(j, i + 1, sz(s) - 1) {
            if (s[i] < s[j]) {
                swap(s[i], s[j]);
                if (s > max_res)
                    max_res = s;
                back_tracking(k - 1, s, max_res);
                swap(s[i], s[j]);
            }
        }
    }
}

void run_case() {
    cin >> k >> s;
    max_res = s;

    back_tracking(k, s, max_res);

    cout << max_res << endl;
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