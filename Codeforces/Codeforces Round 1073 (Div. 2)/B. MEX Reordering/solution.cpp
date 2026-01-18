// link - https://codeforces.com/contest/2191/problem/B


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
   ll n,i,f=0;       
   cin>>n;
   vector<ll>v(n),fre(101,0);
   for(auto &g:v){
    cin>>g;
    fre[g]++;
   } 

   if(fre[0]>1){
    if(fre[1]) f=1;
   }
   else if(fre[0]) f=1;


   if(f) cout<<"YES\n";
   else cout<<"NO\n";
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
