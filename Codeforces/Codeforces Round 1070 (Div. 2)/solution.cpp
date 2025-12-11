// link - https://codeforces.com/contest/2176/problem/A


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define gf g.first
#define gs g.second

void solve(){
   ll n,i,j,s=0;  
   cin>>n;
   vector<int>vis(1001,0),v(n);
   
   for(auto &g:v) cin>>g;

   for(i=0;i<n;i++){
    if(vis[i]==1) continue;
    for(j=i+1;j<n;j++){
      if(v[i]>v[j] && vis[j]==0){
        vis[j]=1;
        s+=1;
      }
    }
   } 

   cout<<s<<"\n";
    
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
