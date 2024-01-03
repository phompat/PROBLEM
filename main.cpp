#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[200010];
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    /* sum odd = sum even number in a range[ ] ==> sum odd - sum even=0  or sum even - sum odd=0
            ******from this equation ==> the even number will be the negative ,so the sum even +sum odd=0;****
                    then using prefix
    */
    ll sum=0;
    bool check=false;
    map<ll,ll>countt;
    countt[0]=1;
    for(int i=1;i<=n;i++){
        if(i%2!=0)a[i]=-1*a[i];//**
        sum+=a[i];
        if(countt[sum]){
            cout<<"YES"<<endl;
            check=true;
            break;
        }
        countt[sum]++;
    }
    if(!check)cout<<"NO"<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
