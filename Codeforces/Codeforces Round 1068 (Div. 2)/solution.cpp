// link - https://codeforces.com/contest/2173/problem/A

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
   ll n,i,k,sm=0,a=0,prev=-1000;
    cin>>n>>k;
    string s;
    cin>>s;
    for(i=0;i<n;i++){
        // cout<<prev<<endl;
        if(s[i]=='0') {
            if(i-prev>k) sm++;
        }
        else prev=i;
    }

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
