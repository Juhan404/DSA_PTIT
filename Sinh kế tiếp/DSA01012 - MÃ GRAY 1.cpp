#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (int i = (a); i >= (b); --i)
#define sz(x) (int)(x).size()
#define pb push_back
#define ppb pop_back
#define endl '\n'
#define fi first
#define se second

#ifdef EmHoang666
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;
using pii = pair<int, int>;

const int INF = 2e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;

void back_tracking(int i, string s) {
    if (i == n) {
        cout << s[0];
        FOR(i, 1, sz(s) - 1) {
            if (s[i - 1] != s[i])
                cout << 1;
            else
                cout << 0;
        }
        cout << ' ';
        return;
    }
    FOR(j, 0, 1) {
        back_tracking(i + 1, s + to_string(j));
    }
}

void run_case() {
    cin >> n;

    back_tracking(0, "");

    cout << '\n';
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
#ifdef EmHoang666
    freopen("Error.txt", "w", stderr);
#endif

    int Testcase = 1;
    cin >> Testcase;

    FOR(Test, 1, Testcase) {
        // cout << "Case #" << Test << ": ";
        run_case();
    }
    return 0;
}