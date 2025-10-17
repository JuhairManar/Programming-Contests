// link - https://codeforces.com/contest/2162/problem/B


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
   int n,i;
   cin>>n;
   string s;
   cin>>s;
   vector<int>v;
   for(i=0;i<n;i++){
    if(s[i]=='1') v.pb(i+1);
   }                        
   cout<<v.size()<<"\n";
   for(auto g:v)cout<<g<<" ";
   cout<<"\n";            
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
