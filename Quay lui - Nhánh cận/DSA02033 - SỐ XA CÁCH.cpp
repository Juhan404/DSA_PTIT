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

int n;
bool used[300];

bool check(string s) {
    FOR(i, 1, n) {
        if (abs(s[i] - s[i - 1]) == 1)
            return false;
    }
    return true;
}

void back_tracking(string s) {
    if (sz(s) == n & check('@' + s)) {
        cout << s << endl;
        return;
    }
    FOR(i, 1, n) {
        if (!used[i]) {
            used[i] = true;
            back_tracking(s + to_string(i));
            used[i] = false;
        }
    }
}

void run_case() {
    cin >> n;

    back_tracking("");
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