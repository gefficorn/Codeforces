#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define ll long long

pair<int,ll> score_rudolf(int n,int m,ll h) {
    pair<int,ll> ret = {0,0};
    int times[m]; for (auto &j:times)cin>>j;
    sort(times,times+m);
    ll runningt=0;
    for (int j=0;j<m;j++) {
        if (runningt+times[j]<=h) {
            ret.f++;
            runningt+=times[j];
            ret.s+=runningt;
        }
    }
    return ret;
}

int find_place(pair<int,ll> rudolf, vector<pair<int,ll>> scores) {
    int place=1;
    for (auto &i:scores) {
        if (rudolf.f>i.f||(rudolf.f==i.f&&rudolf.s<=i.s)) return place;
        place++;
    }
    return place;
}

int main()
{
    int t;cin>>t;
    while (t--) {
        int n,m; ll h;cin>>n>>m>>h;
        vector<pair<int,ll>> scores(n-1);
        pair<int,ll> rudolf=score_rudolf(n,m,h);
        for (int i=0;i<n-1;i++) {
            int times[m]; for (auto &j:times)cin>>j;
            sort(times,times+m);
            ll runningt=0;
            for (int j=0;j<m;j++) {
                if (runningt+times[j]<=h) {
                    scores[i].f++;
                    runningt+=times[j];
                    scores[i].s+=runningt;
                }
            }
        }
        sort(scores.begin(),scores.end(),[&](const pair<int,ll> a, const pair<int,ll>b) {return (a.f==b.f?(a.s<b.s):(a.f>b.f));});
        cout<<(n==1?1:find_place(rudolf,scores))<<endl;
    }
    return 0;
}
