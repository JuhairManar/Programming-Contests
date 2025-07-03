// link - https://www.codechef.com/problems/ADDPERM

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int n,k,d,i;
    cin>>n>>k;
    for(i=1;i<k;i++){
        cout<<i<<" ";
    }
    for(i=n;i>=k;i--){
        cout<<i<<" ";
    }
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
    
    while(t--){
        solve();
    }


  return 0;
}
