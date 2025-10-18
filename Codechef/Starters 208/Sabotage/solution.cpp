// link - https://www.codechef.com/problems/SBTG

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
   int n,x,k,i;
   cin>>n>>x>>k;
   vector<int>v(n);
   for(auto &g:v) cin>>g;
   sort(v.begin(),v.end());
   while(k--){
    v.pop_back();
    x+=100;
   }       
   v.pb(x);
   sort(v.begin(),v.end());
   int pos=upper_bound(v.begin(),v.end(),x)-v.begin();
//    for(auto g:v) cout<<g<<" ";
   cout<<v.size()-pos+1<<"\n";        
    // cout<<pos<<endl;                
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
