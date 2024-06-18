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

class Solution {
private:
    int M = 0, N = 0;
    array<int, 7> arr{};
    int ans = 0;
public:
    Solution() {
        arr.fill(0);
        input();
        solve();
        output();
    }

    void input() {
        cin >> M >> N;
        char c;
        debug(arr);
        for(int i = 0; i < M; i++) {
            cin >> c;
            arr[c - 'A']++;
        }
    }

    void solve() {
        for(auto& i : arr) {
            if(i >= N) {
                continue;
            }
            ans += (N - i);
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