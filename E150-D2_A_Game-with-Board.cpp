#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin>>t;
    while (t--) {
        int n;cin>>n;
        int win=1; //alice
        if (n<=4) {
            win=0;
        }            
        if (win) cout<<"Alice";
        else cout<<"Bob";
        cout<<endl;
    }
    return 0;
}
