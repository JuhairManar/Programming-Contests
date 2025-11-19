// link - https://www.codechef.com/problems/SEPX


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define pb push_back
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
   int n,i,j,f=0,x;
   cin>>n>>x;
   vector<int>v(n);
   for(auto &g:v){
    cin>>g;
    if(g==x) f=1;
   }      

   if(f){
    cout<<"Yes\n";
    return;
   }

   sort(v.begin(),v.end());

   auto it=lower_bound(v.begin(),v.end(),x);

  //  if(it==v.end() || it==v.begin()) cout<<"Yes\n";

  if(x>v.back() || x<v[0]) cout<<"Yes\n";
   else cout<<"No\n";
    
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
