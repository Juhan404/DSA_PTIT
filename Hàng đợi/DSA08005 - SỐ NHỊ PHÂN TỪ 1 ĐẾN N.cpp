#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (auto i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (auto i = (a); i >= (b); --i)
#define sz(x) (int)(x).size()
#define pb push_back
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
const int N = 1e4 + 5;

vector<string> v(N);
int temp;
string s;
stack<int> st;

void prepare() {
    FOR(i, 1, N - 1) {
        temp = i;
        s = "";

        while (temp) {
            st.push(temp & 1);
            temp >>= 1;
        }

        while (!st.empty()) {
            s += to_string(st.top());
            st.pop();
        }

        v[i] = s;
    }
}

void run_case() {
    int n;
    cin >> n;

    FOR(i, 1, n) {
        cout << v[i] << ' ';
    }
    cout << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;
    cin >> T;

    prepare();

    for (int test = 1; test <= T; test++) {

        run_case();
    }
    return 0;
}