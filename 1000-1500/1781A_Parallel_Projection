#include <stdio.h>
#include <iostream>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while (t--) {
        int w, d, h, a, b, f, g;
        cin >> w >> d >> h >> a >> b >> f >> g;
        int edge_w[2] = {abs(a - f), min(b + g, (d - b) + (d - g))}, //go to h through w-h edge
            edge_d[2] = {abs(b - g), min(a + f, (w - a) + (w - f))};
        cout << min(edge_w[0] + edge_w[1], edge_d[0] + edge_d[1]) + h << endl;
    }
    return 0;
}
