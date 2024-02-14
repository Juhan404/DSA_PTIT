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

int n, m, a[505][505], visited[505][505];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void BFS(int i, int j) {
    visited[i][j] = 1;

    FOR(k, 0, 7) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];

        if (!visited[i1][j1] && a[i][j] && i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= m)
            BFS(i1, j1);
    }
}

void input() {
    cin >> n >> m;

    FOR(i, 1, n) {
        FOR(j, 1, m) {
            cin >> a[i][j];
        }
    }
}

void run_case() {
    input();
    memset(visited, 0, sizeof(visited));

    int res = 0;

    FOR(i, 1, n) {
        FOR(j, 1, m) {
            if (!visited[i][j] && a[i][j]) {
                ++res;
                BFS(i, j);
            }
        }
    }

    cout << res << endl;
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