// link - https://codeforces.com/contest/2126/problem/D

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

bool cmp(vector<int> &a,vector<int>&b){
    if(a[2]<b[2]) return 1;
    return 0;
}
void solve(){
    int n,k,i,mx=0,j,d;
    cin>>n>>k;

    vector<vector<int>>v(n);

    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            cin>>d;
            v[i].pb(d);
        }
    }
    sort(v.begin(),v.end(),cmp);
    // for(auto g:v){
    //     for(auto h:g) cout<<h<<" ";
    //     cout<<endl;
    // }

    for(i=0;i<n;i++){
        if(v[i][2]<k) continue;
        if(k>=v[i][0] && k<=v[i][1]) k=max(k,v[i][2]);
    }

    cout<<k<<"\n";
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
