// link - https://codeforces.com/contest/2192/problem/C

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
#define nl "\n"
#define sr(v) sort(v.begin(),v.end())
#define rsr(v) sort(v.rbegin(),v.rend())
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
   ll n,i,h,k,stn,d,r,s=0;
   cin>>n>>h>>k;
   vector<ll>v(n);
   for(auto &g:v){
    cin>>g;
    s+=g;
   } 

   d=h/s;

   stn=d*(n+k);

   ll rh=h-(d*s);

   if(rh==0){
    cout<<stn-k<<"\n";
    return;
   }

   // fastest time to gain this rh

   vector<ll>pmn(n),smx(n);

   pmn[0]=v[0];
   for(i=1;i<n;i++) pmn[i]=min(v[i],pmn[i-1]);

   smx[n-1]=v[n-1];
   for(i=n-2;i>=0;i--) smx[i]=max(smx[i+1],v[i]);
    

   ll ns=0;

//    cout<<stn<<nl;

   for(i=0;i<n;i++){
    ns+=v[i];
    // ll tm=ns-pmn[i]+smx[i+1];
    ll tm=ns;
    // cout<<tm<<"\n";

    if(i+1<n){
        tm = max(tm, ns - pmn[i] + smx[i + 1]);
    }
    if(tm>=rh){
        cout<<stn+i+1<<"\n";
        return;
    }
   }
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
