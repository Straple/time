
#include "time.h"

#include <iostream>
using namespace std;

#pragma optimize("", off)

int main() {
    
    Timer t;
    for (int i = 0; i < 1e8; i++) {
        
    }

    cout << t << "\n"; // 0.171692s

    t.reset();

    for (int i = 0; i < 1e8; i++) {
        hypot(12, 2);
    }
    cout << t << "\n"; // 6.9618s

    t.reset();

    for (int i = 0; i < 1e8; i++) {
        sqrt(12 * 12 + 2 * 2);
    }
    cout << t << "\n"; // 0.801943s
}
