// link - https://www.codechef.com/problems/SORTPREF


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
   ll n,i,j,mn=1e9;    
   cin>>n;
   vector<ll>v(n+1,0);
    for(i=1;i<=n;i++){
        cin>>v[i];
    }

    for(i=n;i>=1;i--){
        if(i!=v[i]){
            mn=min(mn,v[i]);
            break;
        }
    }
    if(mn==1e9) mn=0;
    cout<<mn<<"\n";
    
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
