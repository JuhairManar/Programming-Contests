// link - https://www.codechef.com/START217D/problems/MAKEAP7

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
   ll n,i,j,m,d,r,s,sm;
   cin>>n>>m;
   d=m/3;
   r=m%3;      
   sm=(d*3)+r; 
   s=(d+r);
   if(s==n) cout<<"YES\n";
   else {
    if(s>n){
        cout<<"NO\n"; 
        return;
    }
    ll nr=sm-r;
    s=s-r+1;
    // sm-=(nr*3);
    // sm+=nr;
    // cout<<nr<<" "<<s<<endl;
    if(nr && nr%s==0){
        cout<<"YES\n";
        return;
    }
    else cout<<"NO\n";
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
