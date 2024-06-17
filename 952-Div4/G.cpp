#include "bits/stdc++.h"
using namespace std;
#ifndef KUSH1244
    #define debug( x ) 42;
#endif // KUSH1244

#define sp ' '
#define nl '\n'
#define is ==
#define isnot !=
#define in :
using  ll =  long long;
ll MOD =  ll(1e9 + 7);

ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}


class Solution {
private:
    ll l, r, k;
    ll ans = 0;
public:
    Solution() {
        input();
        solve();
        output();
    }

    void input() {
        cin >> l >> r >> k;
    }

    void solve() {
        if(k > 9) {
            ans = 0;
            return ;
        }
        ll t = (9 / k) + 1;
        auto first = binpow(t, l, MOD) % MOD;
        auto second = binpow(t, r, MOD) % MOD;
        ans = (second + MOD - first) % MOD;
    }

    void output() {
        cout << ans << nl;
    }
};


int main() {
    int a = binpow(2, 8, INT64_MAX);
    debug(a);
    ios::sync_with_stdio( false );
    cin.tie( nullptr );
    cout.tie( nullptr );
#ifdef KUSH1244
    initME();
#endif
    int tc = 0;
    cin >> tc;
    while ( tc-- ) {
        Solution s;
    }
    return 0;
}