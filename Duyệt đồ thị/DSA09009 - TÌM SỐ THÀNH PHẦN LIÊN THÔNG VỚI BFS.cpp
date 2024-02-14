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

int n, m, visited[1005];
vector<int> near[1005];

void BFS(int u) {
    visited[u] = 1;
    for (int x : near[u]) {
        if (!visited[x])
            BFS(x);
    }
}

void reset() {
    FOR(i, 1, n) {
        near[i].clear();
    }
    memset(visited, 0, sizeof(visited));
}

void input() {
    cin >> n >> m;

    FOR(i, 1, m) {
        int x, y;
        cin >> x >> y;

        near[x].pb(y);
        near[y].pb(x);
    }

    FOR(i, 1, n) {
        sort(near[i].begin(), near[i].end());
    }
}

void run_case() {
    input();

    int res = 0;

    FOR(i, 1, n) {
        if (!visited[i]) {
            ++res;
            BFS(i);
        }
    }

    cout << res << endl;

    reset();
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