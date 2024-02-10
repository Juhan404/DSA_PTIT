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
    string a, b;
    cin >> a >> b;

    ll x = 0, y = 0, temp = 1;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for (char c : a) {
        if (c == '1')
            x += temp;

        temp *= 2;
    }

    temp = 1;

    for (char c : b) {
        if (c == '1')
            y += temp;

        temp *= 2;
    }

    cout << x * y << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;
    cin >> T;

    for (int test = 1; test <= T; test++) {

        run_case();
    }
    return 0;
}