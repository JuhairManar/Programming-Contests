// link - https://codeforces.com/contest/2128/problem/A

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    ll n,i,c=1,s=0,k,mx=0;
    cin>>n>>k;
    vector<ll>v(n),vis(n);
    for(i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(i=n-1;i>=0;i--){
        if(v[i]*c<=k){
            vis[i]=1;
            c*=2;
        }
        else{
            v[i]*=2;
        }
    }

    for(auto g:vis){
        if(g==0) s++;
    }

    cout<<s<<"\n";

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
                                        
    int t;
    cin>>t;
    while(t--) solve();

  return 0;
}
