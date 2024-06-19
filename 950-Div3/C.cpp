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
#define all( x ) x.begin(), x.end()

class Solution {
private:
    int n, m;
    vector<int> aArr;
    vector<int> bArr;
    vector<int> dArr;
    map<int, int> freq;
    string ans = "YES";

public:
    Solution() {
        input();
        solve();
        output();
    }

    void input() {
        cin >> n;
        aArr.reserve( n );
        bArr.reserve( n );
        int temp;
        for ( int i = 0; i < n; i++ ) {
            cin >> temp;
            aArr.push_back( temp );
        }
        for ( int i = 0; i < n; i++ ) {
            cin >> temp;
            bArr.push_back( temp );
        }
        cin >> m;
        dArr.reserve( m );
        for ( int i = 0; i < m; i++ ) {
            cin >> temp;
            dArr.push_back( temp );
        }
    }

    void solve() {
        for ( int i = 0; i < n; i++ ) {
            if ( aArr[i] not_eq bArr[i] ) {
                freq[bArr[i]]++;
            }
        }

        for ( auto &i in dArr ) {
            freq[i]--;
        }
        auto x = std::find( all( bArr ), dArr.back() );
        if ( x is bArr.end() ) {
            ans = "NO";
            return;
        }

        for ( auto &[key, value] in freq ) {
            if ( value > 0 ) {
                ans = "NO";
                return;
            }
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