#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string a,temt;
    cin>>n>>a;
    int ans=1;
    bool check=true;
    for(int i=0;i<n;i++){
        temt+=a[i];
        //cout<<"*"<<temt<<endl;
        if(temt.length()==3){
            if(temt[0]!=temt[2])ans++;
            temt.erase(temt.begin());
        }
    }
    cout<<ans<<endl;


}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--)solve();

}
