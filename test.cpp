#include <random_string_generator.hpp>
#include <iostream>
using namespace std;

int main() {
    my::random_string_generator r( 5 );
    for ( int i = 0; i < 100; i++ ) {
        cout << r() << endl;
    }
    return 0;
}
