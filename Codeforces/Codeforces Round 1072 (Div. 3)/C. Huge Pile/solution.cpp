// link - https://codeforces.com/contest/2184/problem/C


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


const ll mx=1e9;
const ll ch=(1e9)+1;

ll mm(ll n,ll k,map<ll,ll>&m){
  if(n<k) return mx;
  if(m.find(n)!=m.end()) return m[n];
  if(n==k) return 0;

  ll a=n/2,b=(n+1)/2;

  m[n]=1+min(mm(a,k,m),mm(b,k,m));

  return m[n];
}

void solve(){
   ll n,i,k,ans=1e9;
   cin>>n>>k;       
   if(n==k){
    cout<<"0\n";
    return;
   }
   map<ll,ll>m;
   ans=mm(n,k,m); 

   if(ans>=mx){
    cout<<"-1\n";
    return;
   }
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
