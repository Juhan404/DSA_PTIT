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

void run_case() {
    string s;
    cin >> s;

    stack<char> st;

    for (char c : s) {
        if (c == ')' && !st.empty() && st.top() == '(')
            st.pop();
        else
            st.push(c);
    }

    int open = 0, close = 0;

    while (!st.empty()) {
        if (st.top() == '(')
            open++;
        else
            close++;

        st.pop();
    }

    cout << (open + 1) / 2 + (close + 1) / 2 << endl;
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