//


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
   ll n,i,d,a,b;       
   cin>>n;
   map<ll,ll>m; 
   vector<ll>v(n);
   for(i=0;i<n;i++){
    cin>>v[i];
    d=v[i];
    if(i&1) m[d]=1;
    else m[d]=2;
   }

   sort(v.begin(),v.end());

   for(i=1;i<n;i++){
    a=v[i-1];
    b=v[i];

    if(m[a]==m[b]){
        cout<<"NO\n";
        return;
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
