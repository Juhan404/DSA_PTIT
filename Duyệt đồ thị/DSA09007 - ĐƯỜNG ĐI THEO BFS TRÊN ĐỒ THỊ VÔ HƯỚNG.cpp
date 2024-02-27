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

int n, m, start, finish;
vector<int> near[1005];
int vis[1005], par[1005];

void input() {
    cin >> n >> m >> start >> finish;
    FOR(i, 1, m) {
        int u, v;
        cin >> u >> v;
        near[u].pb(v);
        near[v].pb(u);
    }
    FOR(i, 1, n) {
        sort(near[i].begin(), near[i].end());
    }
}

void reset() {
    FOR(i, 1, n) {
        near[i].clear();
        vis[i] = 0;
        par[i] = 0;
    }
}

void BFS(int u) {
    queue<int> q;

    q.push(u);
    vis[u] = 1;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int x : near[v]) {
            if (!vis[x]) {
                vis[x] = 1;
                par[x] = v;

                q.push(x);
            }
        }
    }
}

void run_case() {
    input();

    BFS(start);

    if (!vis[finish]) {
        cout << -1;
    }
    else {
        vector<int> path;

        while (finish != start) {
            path.pb(finish);
            finish = par[finish];
        }
        path.pb(start);

        reverse(path.begin(), path.end());

        for (int x : path)
            cout << x << ' ';
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