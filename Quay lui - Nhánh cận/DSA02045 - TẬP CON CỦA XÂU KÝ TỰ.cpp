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
string s;
vector<string> v;

void back_tracking(int start, string res) {
    if (sz(res))
        v.pb(res);
    FOR(i, start, n) {
        back_tracking(i + 1, res + s[i]);
    }
}

void run_case() {
    cin >> n >> s;
    s = "@" + s;

    back_tracking(1, "");

    sort(v.begin(), v.end());

    for (string s : v)
        cout << s << ' ';
    cout << endl;

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