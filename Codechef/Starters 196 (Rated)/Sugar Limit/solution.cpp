// link - https://www.codechef.com/START196D/problems/SULIM

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int n,k,s=0,i,j;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++) cin>>b[i];

    for(i=0;i<n;i++){
        int t=b[i],ts=0;
        for(j=0;j<n;j++){
            if(t>=b[j] && a[j]>0) ts+=a[j];
        }
        s=max(s,ts-t);
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
    
    while(t--){
        solve();
    }


  return 0;
}
