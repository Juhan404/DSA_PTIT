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

int back_tracking(int n) {
    queue<pii> q;

    q.push({n, 0});

    while (!q.empty()) {
        int x = q.front().fi;
        int y = q.front().se;

        q.pop();

        if (x == 1)
            return y;

        if (x % 3 == 0)
            q.push({x / 3, y + 1});
        if (x % 2 == 0)
            q.push({x / 2, y + 1});
        q.push({x - 1, y + 1});
    }
}

void run_case() {
    int n;
    cin >> n;

    cout << back_tracking(n) << endl;
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