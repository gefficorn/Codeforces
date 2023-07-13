#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--) {
        int n; double d,h;cin>>n>>d>>h;
        int heights[n];for (auto &i:heights) cin>>i;
        double area=0.0, tri_area=d*h/2.0,slope=2.0*h/d;
        for (int i=0;i<n-1;i++) {
            double cur_h=heights[i],next_h=heights[i+1];
            if (next_h-cur_h>=h) area+=tri_area;
            else {
                double dh=next_h-cur_h,dd=dh/slope;
                area+=dh*dd+(d-2.0*dd)*dh;
            }
        }
        area+=tri_area;
        cout.precision(9);
        cout<<area<<endl;
    }
    return 0;
}
