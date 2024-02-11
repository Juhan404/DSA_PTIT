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
    int n;
    cin >> n;

    int a[n + 1];
    FOR(i, 1, n) {
        cin >> a[i];
    }

    vector<string> v;
    string s;

    int min_pos = 0;

    FOR(i, 1, n - 1) {
        min_pos = i;

        FOR(j, i + 1, n) {
            if (a[min_pos] > a[j]) {
                min_pos = j;
            }
        }

        swap(a[i], a[min_pos]);

        s = "";

        s += "Buoc " + to_string(i) + ": ";
        FOR(j, 1, n) {
            s += to_string(a[j]) + " ";
        }

        v.pb(s);
    }
    reverse(v.begin(), v.end());
    for (string s : v)
        cout << s << endl;
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