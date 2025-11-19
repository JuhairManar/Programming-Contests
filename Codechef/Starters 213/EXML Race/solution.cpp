// link - https://www.codechef.com/problems/EXMLF1

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define pb push_back
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool cmp(pair<int,int>p1,pair<int,int>p2){
    if(p1.first>p2.first) return 1;
    if(p1.first==p2.first) return p1.second<p2.second;
    return 0;
}

void solve(){
   int n,i,d,t,sp,mn;
   cin>>n;
   vector<pair<int,int>>v;
   for(i=1;i<=n;i++){
    cin>>d>>t;
    v.pb({d/t,i});
   }

   sort(v.begin(),v.end(),cmp);
//    mn=n;


   cout<<v[0].second<<"\n";
    
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
