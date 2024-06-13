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
#define int long long

class Solution {
private:
    int N;
    vector<int> sum;
    vector<int> maxElem;
    vector<int> arr;
    int res = 0;

public:
    Solution() {
        input();
        solve();
        output();
    }

    void input() {
        cin >> N;
        arr.reserve( N );
        sum.reserve( N );
        maxElem.reserve( N );
        int temp;
        for ( int i = 0; i < N; i++ ) {
            cin >> temp;
            arr.push_back( temp );
        }
    }

    void solve() {
        int tempSum = 0;
        for ( int i = 0; i < N; i++ ) {
            sum.push_back( tempSum + arr[i] );
            tempSum = sum.back();
        }
        int currentMax = -1;
        for ( auto &i in arr ) {
            maxElem.push_back( max( currentMax, i ) );
            currentMax = maxElem.back();
        }

        for ( int i = N - 1; i >= 0; i-- ) {
            auto currentElem = arr[i];
            int currentMax = maxElem[i];
            int currentSum = sum[i];
            /* Deal with the case of 0 and 1*/
            if ( i == 0 ) {
                res += currentElem == 0;
                return;
            }

            if ( currentMax is currentElem ) {
                int prevSum = sum[i] - currentElem;
                res += prevSum == currentElem;
            }
            else {
                int sumWithoutMax = currentSum - currentMax;
                res += sumWithoutMax == currentMax;
            }
        }
    }

    void output() {
        cout << res << nl;
    }
};


int32_t main() {
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