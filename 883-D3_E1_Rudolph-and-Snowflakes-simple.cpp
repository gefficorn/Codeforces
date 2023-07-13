#include <bits/stdc++.h>
#define NMAX (int) 1e6
using namespace std;
int main()
{
    int t;cin>>t;
    bool poss[NMAX+1]={0};
    for (int i=2;i+i*i+1<=NMAX;i++) {
        int j=i*i;
        int cur_n=i+j+1;
        while (cur_n<=NMAX) {
            poss[cur_n]=1;
            j*=i;
            cur_n+=j;
        }
    }
    while (t--) {
        int n;cin>>n;
        cout<<(poss[n]?"YES":"NO")<<endl;
    }
    return 0;
}
