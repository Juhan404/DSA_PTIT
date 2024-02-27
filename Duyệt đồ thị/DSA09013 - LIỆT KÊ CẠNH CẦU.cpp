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

int n, m, res = 0;
set<int> near[1005];
int vis[1005];
vector<pii> E;

void reset() {
    res = 0;
    memset(vis, 0, sizeof(vis));
    E.clear();
    FOR(i, 1, n) {
        near[i].clear();
    }
}

void input() {
    cin >> n >> m;

    FOR(i, 1, m) {
        int u, v;
        cin >> u >> v;

        near[u].insert(v);
        near[v].insert(u);

        E.pb({u, v});
    }
}

void dfs(int u) {
    vis[u] = 1;

    for (int v : near[u]) {
        if (!vis[v])
            dfs(v);
    }
}

void run_case() {
    input();

    FOR(i, 1, n) {
        if (!vis[i]) {
            dfs(i);
            res++;
        }
    }

    int cnt = 0;

    for (pii x : E) {
        cnt = 0;
        memset(vis, 0, sizeof(vis));

        near[x.fi].erase(x.se);
        near[x.se].erase(x.fi);

        FOR(i, 1, n) {
            if (!vis[i]) {
                dfs(i);
                cnt++;
            }
        }

        if (cnt > res) {
            cout << x.fi << ' ' << x.se << ' ';
        }

        near[x.fi].insert(x.se);
        near[x.se].insert(x.fi);
    }
    cout << endl;

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