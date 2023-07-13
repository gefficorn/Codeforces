#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--) {
        int n;cin>>n;
        deque<int> ans;
        ans.push_back(1);
        bool front=0;
        for (int i=n;i>1;i--) {
            if (front) ans.push_front(i);
            else ans.push_back(i);
            front = !front;
        }
        while (!ans.empty()) {
            cout<<ans.front()<<" ";
            ans.pop_front();
        }
        cout<<endl;
    }
    return 0;
}
