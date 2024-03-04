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

int n, k;
int a[15], x[15];
bool check = false;

void back_tracking(int i, int st, int tong) {
    FOR(j, st, n) {
        x[i] = a[j];

        if (tong + a[j] == k) {
            check = true;

            cout << '[';

            FOR(k, 1, i) {
                cout << x[k];
                if (k != i)
                    cout << ' ';
            }

            cout << "] ";
        }
        else
            back_tracking(i + 1, j + 1, tong + a[j]);
    }
}

void run_case() {
    cin >> n >> k;
    FOR(i, 1, n)
    cin >> a[i];

    sort(a + 1, a + n + 1);

    back_tracking(1, 1, 0);

    if (!check)
        cout << -1;

    check = false;

    cout << endl;
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