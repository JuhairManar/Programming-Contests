// link - https://www.codechef.com/problems/GUCD

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
   int n,i,a,b,d=0,ans;
   cin>>n;
   vector<int>v(n);
   for(auto &g:v) cin>>g;
   sort(v.rbegin(),v.rend());
    a=v[0];
    for(i=1;i<n;i++){
        d=max(d,a-v[i]);
        if(d>1) break;
    }

    if(d==0 || d>1) ans=a-1;
    else ans=a-2;

    cout<<ans<<"\n";
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
