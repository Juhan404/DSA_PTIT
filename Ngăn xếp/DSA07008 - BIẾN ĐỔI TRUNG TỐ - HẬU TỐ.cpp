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

map<char, int> prio;

string infix_to_postfix(string s) {
    stack<char> st;
    string res;

    for (char c : s) {
        if (c == '(')
            st.push(c);
        else if (c == ')') {
            while (sz(st) && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else if (isalpha(c))
            res += c;
        else {
            while (sz(st) && prio[st.top()] >= prio[c]) {
                res += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (sz(st)) {
        res += st.top();
        st.pop();
    }

    return res;
}

void run_case() {
    string s;
    cin >> s;

    cout << infix_to_postfix(s) << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;
    cin >> T;

    prio['+'] = prio['-'] = 1;
    prio['*'] = prio['/'] = 2;
    prio['^'] = 3;

    for (int test = 1; test <= T; ++test) {

        run_case();
    }
    return 0;
}