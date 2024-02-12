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
const int N = 1e5 + 5;

vector<int> ugly;
priority_queue<int, vector<int>, greater<int>> pq;
unordered_map<int, int> mp;

void sang() {
    pq.push(1);

    while (sz(ugly) < 10000) {
        int temp = pq.top();
        pq.pop();

        ugly.pb(temp);

        if (!mp[temp * 2]) {
            pq.push(temp * 2);
            mp[temp * 2] = 1;
        }
        if (!mp[temp * 3]) {
            pq.push(temp * 3);
            mp[temp * 3] = 1;
        }
        if (!mp[temp * 5]) {
            pq.push(temp * 5);
            mp[temp * 5] = 1;
        }
    }
}

void run_case() {
    int n;
    cin >> n;

    cout << ugly[n - 1] << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;
    cin >> T;

    sang();

    for (int test = 1; test <= T; test++) {

        run_case();
    }
    return 0;
}