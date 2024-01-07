#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<ll>a;
    a.clear();
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        a.push_back(x);
    }
    int l=INT_MAX,r=INT_MAX;
    ll ans=0;
    for(int i=0;i<n;i++){
        if(l>r)swap(l,r);
        if(l>=a[i])l=a[i];
        else if(r>=a[i])r=a[i];
        else if(a[i]>l&&a[i]>r){
            ans++;
            l=a[i];
        }
    }
    cout<<ans<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}
