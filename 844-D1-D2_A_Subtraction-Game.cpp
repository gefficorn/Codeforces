#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--) {
        int a,b;cin>>a>>b;
        if (a!=1) {
            cout<<1<<endl;
        } else {
            //a==1 because a<b
            cout<<a+b<<endl;
        }
    }
    return 0;
}
