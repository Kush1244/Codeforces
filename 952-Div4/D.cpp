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
    int m, n;
    vector<vector<char>> grid;
    int rRow = -1, rCol = -1, maxPoints = -1;

public:
    Solution() {
        input();
        solve();
        output();
    }

    void input() {
        cin >> m >> n;
        grid.reserve( m );
        vector<char> temp( n, '.' );
        for ( int i = 0; i < m; i++ ) {
            for ( int j = 0; j < n; j++ ) {
                cin >> temp[j];
            }
            grid.push_back( temp );
        }
    }

    void solve() {
        // First check for Row
        for ( int i = 0; i < m; i++ ) {
            int temp = 0;
            for ( int j = 0; j < n; j++ ) {
                if ( grid[i][j] == '#' ) {
                    temp++;
                }
            }
            if ( temp > maxPoints ) {
                maxPoints = temp;
                rRow = i;
            }
        }
        maxPoints = -1;
        // Now check the columns
        for ( int j = 0; j < n; j++ ) {
            int temp = 0;
            for ( int i = 0; i < m; i++ ) {
                if ( grid[i][j] is '#' ) {
                    temp++;
                }
            }
            if ( temp > maxPoints ) {
                maxPoints = temp;
                rCol = j;
            }
        }
    }

    void output() {
        cout << rRow + 1 << sp << rCol + 1 << nl;
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