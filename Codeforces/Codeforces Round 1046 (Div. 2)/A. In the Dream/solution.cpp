// link - https://codeforces.com/contest/2136/problem/A

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int a,b,c,d,df,mn,mx,f1=1,f2=1;
    cin>>a>>b>>c>>d;
    mn=min(a,b);
    mx=max(a,b);
    if(mx>(mn*2)+2) f1=0;
    a=abs(c-a);
    b=abs(d-b);
    mn=min(a,b);
    mx=max(a,b);
    if(mx>(mn*2)+2)f2=0;
    if(f1&f2)cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
                                        


  return 0;
}
