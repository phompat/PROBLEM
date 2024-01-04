#include <bits/stdc++.h>
using namespace std;
string a,b;
//  there is only 2 syllables which are CV , CVC
void solve(){
    int n;
    cin>>n>>a;
    stack<char>ans;
    int i=n-1;
    while(i>=0){
        if(a[i]=='a'||a[i]=='e'){
                ans.push(a[i]),ans.push(a[i-1]),ans.push('.');
                i-=2;
        }
        else{
            ans.push(a[i]),ans.push(a[i-1]),ans.push(a[i-2]),ans.push('.');
            i-=3;
        }
    }
    string temt;
    while(!ans.empty()){
        temt+=ans.top();
        ans.pop();
    }
    temt.erase(temt.begin());
    cout<<temt<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
