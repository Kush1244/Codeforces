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
    string a, b;
public:
    Solution() {
        a.reserve(3);
        b.reserve(3);
        input();
        solve();
        output();
    }

    void input() {
            cin >> a >> b;
    }

    void solve() {
        std::swap(a[0], b[0]);
    }

    void output() {
        cout << a << sp << b << nl;
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