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

void back_tracking(int max_num, int remain, string s) {
    if (remain == 0) {
        s.ppb();
        cout << s << ')' << ' ';
        return;
    }

    ROF(i, max_num, 1) {
        if (i <= remain)
            back_tracking(i, remain - i, s + to_string(i) + ' ');
    }
}

void run_case() {
    int n;
    cin >> n;

    back_tracking(n, n, "(");

    cout << endl;
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