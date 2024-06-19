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
    int n;
    vector<int> arr;
    string ans = "YES";

public:
    Solution() {
        input();
        solve();
        output();
    }

    void input() {
        cin >> n;
        arr.reserve( n );
        int temp;
        for ( int i = 0; i < n; i++ ) {
            cin >> temp;
            arr.push_back( temp );
        }
    }
    bool isGoodArray( vector<int> &vec ) {
        int prevGCD = -1, currentGCD = -1;
        for ( int i = 0; i < n - 2; i++ ) {
            currentGCD = gcd( vec[i], vec[i + 1] );
            if ( currentGCD < prevGCD ) {
                return false;
            }
            prevGCD = currentGCD;
        }
        return true;
    }
    void solve() {
        int toRemove = -1;
        int prevGCD = -1;
        for ( int i = 0; i < n - 1; i++ ) {
            auto currentGCD = gcd( arr[i], arr[i + 1] );
            if ( currentGCD < prevGCD ) {
                toRemove = i;
                break;
            }
            prevGCD = currentGCD;
        }
        if ( toRemove is - 1 ) {
            return;
        }
        vector<int> v0 = arr, v = arr, v1 = arr;
        if ( toRemove > 0 ) {
            v0.erase( v0.begin() + toRemove - 1 );
        }
        v.erase( v.begin() + toRemove );
        if ( toRemove < ( n - 1 ) ) {
            v1.erase( v1.begin() + toRemove + 1 );
        }
        ans = isGoodArray( v0 ) or isGoodArray( v ) or isGoodArray( v1 ) ? "YES" : "NO";
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