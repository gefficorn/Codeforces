#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--) {
        int n;cin>>n;;
        int st=-1,en=-1,b_st=-1;
        bool b=0;
        while (n--) {
            int c;cin>>c;
            // cout<<st<<" "<<en<<" "<<b_st<<" "<<b<<" "<<c<<endl;
            if (!b) {
                if (c<en) {
                    if (c>st) cout<<"0"; //does not work as b or greatest
                    else {
                        b=1;
                        cout<<"1";
                        b_st=c;
                    } //works as b
                } else {
                    if (st<0) st=c;
                    en=c;
                    cout<<"1";
                }
                continue;
            } //not looped yet
            if (c>st||c<b_st) cout<<"0";
            else {
                b_st=c;
                cout<<"1";
            }
            //looped, must fit as b
        }
        cout<<endl;
    }
    return 0;
}
