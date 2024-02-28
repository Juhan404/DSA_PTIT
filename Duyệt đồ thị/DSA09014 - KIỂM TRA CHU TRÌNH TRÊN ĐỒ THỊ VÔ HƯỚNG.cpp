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

int n, m;
vector<int> near[1005];
int vis[1005], par[1005];

void reset() {
    FOR(i, 1, n) {
        near[i].clear();

        vis[i] = 0;
        par[i] = 0;
    }
}

void input() {
    cin >> n >> m;

    FOR(i, 1, m) {
        int u, v;
        cin >> u >> v;

        near[u].pb(v);
        near[v].pb(u);
    }
}

bool DFS(int u) {
    vis[u] = 1;

    for (int v : near[u]) {
        if (vis[v] && v != par[u]) {
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

    bool check = false;

    FOR(i, 1, n) {
        if (!vis[i]) {
            if (DFS(i)) {
                check = true;
                break;
            }
        }
    }

    cout << (check ? "YES" : "NO") << endl;

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