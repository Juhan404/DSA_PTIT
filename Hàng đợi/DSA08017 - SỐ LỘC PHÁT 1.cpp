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

vector<string> v;

void back_tracking(string s) {
    if (sz(s) > 14)
        return;
    else if (sz(s))
        v.pb(s);
    back_tracking(s + '6');
    back_tracking(s + '8');
}

void run_case() {
    int n;
    cin >> n;

    for (string s : v) {
        if (sz(s) <= n)
            cout << s << ' ';
    }
    cout << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;
    cin >> T;

    back_tracking("");

    sort(v.begin(), v.end(), [](string x, string y) {
        return (sz(x) != sz(y)) ? (sz(x) > sz(y)) : (x > y);
    });

    for (int test = 1; test <= T; test++) {

        run_case();
    }
    return 0;
}