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
#define all(x) x.begin(), x.end()

class Solution {
private:
    int n, f, k;
    vector<int> cubes;
    string ans;
public:
    Solution() {
        input();
        solve();
        output();
    } 

    void input() {
        cin >> n >> f >> k;
        cubes.reserve(n);
        int temp;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            cubes.push_back(temp);
        }
    }

    void solve() {
        int fav = cubes[f - 1];
        debug(fav);
        sort(cubes.begin(), cubes.end());
        auto firstOccur = lower_bound(all(cubes), fav) - cubes.begin() - 0;
        auto lastOccur = upper_bound(all(cubes), fav) - cubes.begin() - 1;
        int Y = n - 1;
        int X = Y - k + 1;
        debug(cubes);
        debug(firstOccur);
        debug(lastOccur);
        debug(X);
        debug(Y);
        if(lastOccur < X) {
            ans = "NO";
        }
        else if(firstOccur >= X) {
            ans = "YES";
        }
        else {
            ans = "MAYBE";
        }
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