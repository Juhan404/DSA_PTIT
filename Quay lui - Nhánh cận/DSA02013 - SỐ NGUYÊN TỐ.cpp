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

int n, p, s;
vector<string> v;
bool nt[301];

void sang() {
    FOR(i, 2, 300)
    nt[i] = true;
    FOR(i, 2, sqrt(301)) {
        if (nt[i]) {
            for (int j = i * i; j <= 300; j += i)
                nt[j] = false;
        }
    }
}

void back_tracking(int cnt, int st, int cur_sum, string res) {
    if (cnt == n && cur_sum == s) {
        v.pb(res);
        return;
    }
    else if (cur_sum < s && cnt < n) {
        FOR(i, st, s) {
            if (nt[i]) {
                back_tracking(cnt + 1, i + 1, cur_sum + i, res + to_string(i) + " ");
            }
        }
    }
}

void run_case() {
    cin >> n >> p >> s;

    back_tracking(0, p + 1, 0, "");

    cout << sz(v) << endl;
    for (string s : v)
        cout << s << endl;

    v.clear();
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int test = 1;
    cin >> test;

    sang();

    for (int tc = 1; tc <= test; tc++) {
        // cout << "Test #" << tc << ": ";
        run_case();
    }
    return 0;
}