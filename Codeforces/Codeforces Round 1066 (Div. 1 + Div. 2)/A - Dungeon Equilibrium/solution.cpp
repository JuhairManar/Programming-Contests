// link - https://codeforces.com/contest/2157/problem/A

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
   int n,i,c=0;
   cin>>n;
   vector<int>v(101,0);
   
   for(i=0;i<n;i++){
    int d;
    cin>>d;
    v[d]++;
   }

   for(i=0;i<=100;i++){
    // c+=min(v[i],abs(i-v[i]));
    if(v[i]==0 || v[i]==i) continue;
    if(v[i]>i) c+=(v[i]-i);
    else c+=v[i];
   }

   cout<<c<<"\n";
    
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
