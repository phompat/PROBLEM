#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200002],b[200002];
pair<ll,ll>c[200002];
vector<ll>ans;
void solve(){
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    // Au-Av>=Bu-Bv --> Au-Bu>=Av-Bv -->c[i]=a[i]-b[i]--> c[u]>=c[v] will have an edge.
    for(int i=1;i<=n;i++)c[i]={a[i]-b[i],i};
    sort(c+1,c+n+1);
    ans.clear();
    ll maxx=c[n].first;
    for(int i=n;i>=1;i--){
        if(c[i].first==maxx)ans.push_back(c[i].second);
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    cout<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--)solve();
}
