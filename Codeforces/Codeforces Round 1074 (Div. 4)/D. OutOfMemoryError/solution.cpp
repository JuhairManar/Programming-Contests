// link - https://codeforces.com/contest/2185/problem/D


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define pb push_back
#define gf g.first
#define gs g.second
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
   ll n,i,d,mx=0,m,h,a,b,cr=0;
   cin>>n>>m>>h;
   vector<ll>v(n+1,0),add(n+1,0);
   vector<ll>last(n+1,0);
   for(i=1;i<=n;i++) cin>>v[i];
   while(m--){
    cin>>a>>b;
    
    if(last[a]<cr){
      add[a]=0;
      last[a]=cr;
    }

    add[a]+=b;

    if(v[a]+add[a]>h) cr++;
   }

   for(i=1;i<=n;i++){
    if(last[i]<cr) cout<<v[i]<<" ";
    else cout<<v[i]+add[i]<<" ";
   }

   cout<<"\n";
    
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

