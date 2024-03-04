#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (int i = (a); i >= (b); --i)
#define sz(x) (int)(x).size()
#define pb push_back
#define ppb pop_back
#define endl '\n'
#define fi first
#define se second

#ifdef EmHoang666
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;
using pii = pair<int, int>;

const int INF = 2e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
vector<string> v;
int x[11];
bool used[11];

void back_tracking(int i) {
    FOR(j, 1, n) {
        if (used[j] == false) {
            x[i] = j;
            used[j] = true;

            if (i == n) {
                string s = "";
                FOR(i, 1, n) {
                    s += to_string(x[i]);
                }
                v.pb(s);
            }
            else
                back_tracking(i + 1);

            used[j] = false;
        }
    }
}

void run_case() {
    cin >> n;

    back_tracking(1);

    sort(v.begin(), v.end(), [](string x, string y) {
        return x > y;
    });

    for (string s : v)
        cout << s << ' ';
    cout << '\n';

    v.clear();
    FOR(i, 0, 10) {
        x[i] = 0;
        used[i] = false;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
#ifdef EmHoang666
    freopen("Error.txt", "w", stderr);
#endif

    int Testcase = 1;
    cin >> Testcase;

    FOR(Test, 1, Testcase) {
        // cout << "Case #" << Test << ": ";
        run_case();
    }
    return 0;
}