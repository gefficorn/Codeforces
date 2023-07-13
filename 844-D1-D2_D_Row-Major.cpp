#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--) {
        int n;cin>>n;
        set<int> factors;
        for (int i=1;i*i<=n;i++) { //O(sqrt(n))
            if (n%i==0) {
                factors.insert(i);
                if (i!=1) factors.insert(n/i);
            }
        }
        int ans[n];
        //for each factor < n check if char is taken; reset char as long as possible
        for (int i=0;i<n;i++) { //O(n)
            bool used[26]={0};
            for (auto &j:factors) { //O(239)
                if (i-j<0) break;
                used[ans[i-j]-97]=1;
            }
            bool free_char=0;
            for (int j=0;j<26&&!free_char;j++) { //O(26)
                if (!used[j]) {
                    ans[i]=j+97;
                    cout<<(char) ans[j];
                    free_char=1;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
