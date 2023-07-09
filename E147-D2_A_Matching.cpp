#include<bits/stdc++.h>
using namespace std;
int solve() {
    string s; cin>>s;
    int tens=1;
    if(s.at(0)=='0')tens=0;
    if(s.at(0)=='?')tens*=9;
    for (int i=1;i<s.size();i++) {
        if (s.at(i)!='?') continue;
        else tens*=10;
    }
    return tens;
}
 
int main() {
    int t;cin>>t;
    while(t--) {
        cout<<solve()<<endl;
    }
    return 0;
}
