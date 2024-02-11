#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (auto i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (auto i = (a); i >= (b); --i)
#define sz(x) (int)(x).size()
#define pb push_back
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

void run_case() {
    int n, s;
    cin >> n >> s;

    if (s > 9 * n || (s == 0 && n != 1)) {
        cout << "-1 -1\n";
        return;
    }

    int temp = s;
    --s;

    string max_res, min_res;

    FOR(i, 1, n) {
        if (temp >= 10) {
            max_res += '9';
            temp -= 9;
        }
        else {
            max_res += to_string(temp);
            temp = 0;
        }
    }

    FOR(i, 1, n) {
        if (s >= 10) {
            min_res = '9' + min_res;
            s -= 9;
        }
        else {
            min_res = to_string(s) + min_res;
            s = 0;
        }
    }

    if (sz(min_res) == n)
        ++min_res.front();
    else
        min_res = '1' + min_res;

    cout << min_res << ' ' << max_res << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;

    for (int test = 1; test <= T; test++) {

        run_case();
    }
    return 0;
}