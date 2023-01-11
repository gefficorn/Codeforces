#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int t, k, n; cin >> t;
    while (t--) {
        cin >> k >> n;
        int x = 1, rem = k - 1; cout << x;
        for (int i = 2; i <= k; i++) {
            if (!((i * (i + 1)) / 2 - 1 + (k - (i - 1)) <= n)) break;
            x += i;
            cout << " " << x;
            rem--;
        }
        while (rem--) cout << " " << ++x;
        cout << endl;
    }
    return 0;
}
