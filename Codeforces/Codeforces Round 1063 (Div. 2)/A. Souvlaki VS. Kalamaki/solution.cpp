// link - https://codeforces.com/contest/2163/problem/A

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
   int n,i,j;
   cin>>n;
   vector<int>v(n);
   for(auto  &g:v) cin>>g;
   
   sort(v.begin(),v.end());

   for(i=0;i<n-1;i++){
    if(i%2==1){
      if(v[i]!=v[i+1]){
        cout<<"NO\n";
        return;
      }
    }
   }

   cout<<"YES\n";
    
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
