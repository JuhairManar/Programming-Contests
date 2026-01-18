// link - https://codeforces.com/contest/2185/problem/C


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
   ll n,i,d,c=1,mx=1;       
   cin>>n;
   set<ll>s;
   for(i=0;i<n;i++){
    cin>>d;
    s.insert(d);
   } 

   vector<ll>v(s.begin(),s.end());

   for(i=1;i<n;i++){
    if(v[i]-v[i-1]==1) {
        c++;
        mx=max(mx,c);
    }
    else{
        c=1;
        mx=max(mx,c);
    }
   }

   cout<<mx<<"\n";
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
