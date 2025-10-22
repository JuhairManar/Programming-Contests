// link - https://www.codechef.com/problems/P3209


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

bool cmp(pair<int,int>p1,pair<int,int>p2){
    if(p1.first>p2.first) return 1;
    if(p1.first==p2.first){
        return p1.second<p2.second;
    }
    return 0;
}

void solve(){
   int n,i,j;
   cin>>n;
   vector<pair<int,int>>v;
    for(i=1;i<=n;i++){
        int g=__gcd(i,n);
        v.pb({g,i});
    }
    sort(v.begin(),v.end(),cmp);
    for(auto g:v) cout<<g.second<<" ";
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
