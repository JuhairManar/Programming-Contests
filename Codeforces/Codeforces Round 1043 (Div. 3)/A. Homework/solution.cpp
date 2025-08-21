// link - https://codeforces.com/contest/2132/problem/A

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int n,m,i;
    string a,b,c,af;
    cin>>n;
    cin>>a;
    cin>>m;
    cin>>b>>c;
    for(i=0;i<m;i++){
        if(c[i]=='V') af+=b[i];
        else a+=b[i];
    }

    reverse(af.begin(),af.end());
    cout<<af+a<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t;
    cin>>t;
    while(t--){
        solve();
    }                                    


  return 0;
}
