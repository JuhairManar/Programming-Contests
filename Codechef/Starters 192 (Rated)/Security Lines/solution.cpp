// link - https://www.codechef.com/START192D/problems/SECLN


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int i,d,mn=1000,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    mn=min({mn,a[0],a[1]+1});

    for(i=2;i<n;i++){
        a[i]=max(0,a[i]-i-1);
        mn=min(mn,a[i]+i);
    }
    cout<<mn<<"\n";
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
