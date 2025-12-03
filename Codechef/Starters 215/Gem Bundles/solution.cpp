// link - https://www.codechef.com/problems/GEMBUND

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
   ll n,i,k,sm=0,s1=0;
   cin>>n>>k;
   vector<ll>v(n),sp;
   for(auto &g:v) cin>>g;
   string s;
   cin>>s;

   for(i=0;i<n;i++){
    if(s[i]=='0') sm+=v[i];
    else {
        sp.pb(v[i]);
        s1+=v[i];
    }
   } 

   sort(sp.rbegin(),sp.rend());
   if(sp.size()==0 || s1<k || sm<k){
    cout<<sm<<"\n";
    return ;
   }
   sm+=(sp[0]-k);

   for(i=1;i<sp.size();i++) sm+=sp[i];

   cout<<sm<<"\n";
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
