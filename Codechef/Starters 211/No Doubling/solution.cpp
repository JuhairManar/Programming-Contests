// link - https://www.codechef.com/problems/NODOUB


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
   int n,i,j;
   cin>>n;
   vector<int>v(n),ans;
   for(auto &g:v) cin>>g;
   i=0;j=n-1;
    sort(v.rbegin(),v.rend());
    while(i<j){
        ans.pb(v[i]);
        ans.pb(v[j]);
        i++;j--;
    }

    if(i==j) ans.pb(v[i]);

    for(auto g:ans) cout<<g<<" ";
    cout<<endl;
    
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
