// link - https://codeforces.com/contest/2132/problem/B

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
  ll n,i,k,a=1,d=10,c=1,m=1e17;
  cin>>n;
  vector<ll>v;
  while(d+a<=n){
    if(n%(d+a)==0) {
      v.pb(n/(d+a));
    }
    if(d/m==1) break;
    d*=10;
  }
  reverse(v.begin(),v.end());
  if(v.size()==0){
    cout<<"0\n";
    return;
  }
  else{
    cout<<v.size()<<endl;
    for(auto g:v) cout<<g<<" ";
    cout<<endl;
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
