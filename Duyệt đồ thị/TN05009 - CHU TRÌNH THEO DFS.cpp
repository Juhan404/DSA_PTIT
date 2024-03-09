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

int n, m, last = 0;
int vis[1005], par[1005];
vector<int> adj[1005];

void reset() {
    FOR(i, 1, n) {
        adj[i].clear();
        vis[i] = 0;
        par[i] = 0;
    }
}

void input() {
    cin >> n >> m;
    reset();

    FOR(i, 1, m) {
        int u, v;
        cin >> u >> v;

        adj[u].pb(v);
        adj[v].pb(u);
    }

    FOR(i, 1, n) {
        sort(adj[i].begin(), adj[i].end());
    }
}

bool DFS(int u) {
    vis[u] = 1;
    for (int v : adj[u]) {
        if (vis[v] && par[u] != v && v == 1) {
            last = u;
            return true;
        }
        else if (!vis[v]) {
            par[v] = u;
            if (DFS(v))
                return true;
        }
    }
    return false;
}

void run_case() {
    input();

    if (DFS(1)) {
        vector<int> path;

        while (last != 1) {
            path.pb(last);
            last = par[last];
        }

        reverse(path.begin(), path.end());

        cout << 1 << ' ';

        for (int x : path)
            cout << x << " ";

        cout << 1 << endl;
    }
    else
        cout << "NO\n";
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