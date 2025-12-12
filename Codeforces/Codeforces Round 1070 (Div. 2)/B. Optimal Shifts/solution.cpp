// link - https://codeforces.com/contest/2176/problem/B


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
   int n;
   cin>>n; 
   string s;
   cin>>s;
   int i,j,c=0,mx=0;
   
   for(auto g:s){
    if(g=='0'){
        c++;
        mx=max(mx,c);
    }
    else c=0;
   }

   for(auto g:s){
    if(g=='0'){
        c++;
        mx=max(mx,c);
    }
    else break;
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
