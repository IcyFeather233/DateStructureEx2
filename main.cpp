#include <iostream>
#include "calc.h"
#define MAXLEN 100
using namespace std;
int main() {
    while (1) {
        cout << "Please enter:" << endl;
        char s[MAXLEN];
        cin >> s;
        double ans = calc(s);
        cout << ans << endl;
    }

    return 0;
}
