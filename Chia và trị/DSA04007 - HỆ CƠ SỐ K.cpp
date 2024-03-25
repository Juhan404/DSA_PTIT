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

int k;
string a, b;

void run_case() {
    cin >> k >> a >> b;

    while (sz(a) < sz(b))
        a = "0" + a;

    while (sz(b) < sz(a))
        b = "0" + b;

    string s = "";
    int nho = 0;

    ROF(i, sz(a) - 1, 0) {
        int temp = (a[i] - '0') + (b[i] - '0') + nho;

        s = (char)(temp % k + '0') + s;
        nho = temp / k;
    }

    if (nho > 0)
        s = (char)(nho + '0') + s;

    cout << s << endl;
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