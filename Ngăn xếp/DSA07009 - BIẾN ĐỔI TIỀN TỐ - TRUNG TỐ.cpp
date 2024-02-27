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

string prefix_to_infix(string s) {
    stack<string> st;

    ROF(i, sz(s) - 1, 0) {
        if (!isalpha(s[i])) {
            string op1 = st.top();
            st.pop();

            string op2 = st.top();
            st.pop();

            st.push("(" + op1 + s[i] + op2 + ")");
        }
        else
            st.push(string(1, s[i]));
    }
    return st.top();
}

void run_case() {
    string s;
    cin >> s;

    cout << prefix_to_infix(s) << endl;
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