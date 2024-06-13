#include "bits/stdc++.h"
using namespace std;
#ifndef KUSH1244
    #define debug( x ) 42;
#endif // KUSH1244

#define sp ' '
#define nl '\n'
#define is ==
#define isnot !=

class Solution {
private:
    int n;
    int ans = 0;
public:
    Solution() {
        input();
        solve();
        output();
    }

    void input() {
        cin >> n;
    }

    void solve() {
        ans = 3 * (n == 3) + 2 * (n != 3);
    }

    void output() {
        cout << ans << nl;
    }
};


int main() {
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