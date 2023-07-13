#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--) {
        int n,k;cin>>n>>k;
        int a[n];for (int i=0;i<n;i++)cin>>a[i];
        vector<int> diffs; for (int i=1;i<n;i++) diffs.push_back(abs(a[i]-a[i-1]));
        sort(diffs.begin(),diffs.end(),greater<int>());
        int ans=0;
        for (int i=k-1;i<diffs.size();i++) ans+=diffs[i];
        cout<<ans<<endl;
    }
    return 0;
}
