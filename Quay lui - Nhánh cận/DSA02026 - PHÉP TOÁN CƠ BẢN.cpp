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

string s;
bool check = false;

bool is_correct() {
    int a = stoi(s.substr(0, 2)), b = stoi(s.substr(5, 2)), c = stoi(s.substr(10, 2));

    if (a < 10 || b < 10 || c < 10)
        return false;

    if (s[3] == '+')
        return a + b == c;
    else
        return a - b == c;
}

void back_tracking(int i) {
    if (check)
        return;

    if (i == sz(s)) {
        if (is_correct()) {
            cout << s << endl;
            check = true;
        }
        return;
    }

    if (s[i] == '?') {
        if (i == 3) {
            s[i] = '+';
            back_tracking(i + 1);

            s[i] = '-';
            back_tracking(i + 1);
        }
        else {
            FOR(j, 0, 9) {
                s[i] = j + '0';
                back_tracking(i + 1);
            }
        }

        s[i] = '?';
    }
    else
        back_tracking(i + 1);
}

void run_case() {
    getline(cin, s);
    check = false;

    if (s[3] == '*' || s[3] == '/') {
        cout << "WRONG PROBLEM!" << endl;
        return;
    }

    back_tracking(0);

    if (!check)
        cout << "WRONG PROBLEM!" << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;
    cin >> T;

    cin.ignore();

    for (int test = 1; test <= T; ++test) {

        run_case();
    }
    return 0;
}