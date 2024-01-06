#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;cin>>n;
    vector<ll>a(n+10),b(n+1000);//b[i]=score
    for(int i=1;i<=n;i++)cin>>a[i];
    ll ans =0;
    for(int i=n;i>=1;i--){
        if(i==n)b[i]=a[i];
        else{
            if(i+a[i]<=n)b[i]=b[i+a[i]]+a[i];
            else b[i]=a[i];
        }

    }
    for(int i=1;i<=n;i++)ans=max(ans,b[i]);
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}
