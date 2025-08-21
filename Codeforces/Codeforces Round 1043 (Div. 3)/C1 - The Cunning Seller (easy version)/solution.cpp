// link - https://codeforces.com/contest/2132/problem/C1

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    ll n,c=0,s=0,i,r,ts;
    cin>>n;
    while(n){
        r=n%3;
        n/=3;
        if(c==0) ts=3;
        else{
            ll x=(ll) pow(3,c+1);
            ll y=(ll) pow(3,c-1);
            ts=x+(c*y);
        }
        ll a=(ts*r);
        s+=a;
        c++;
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
    while(t--) solve();                                    


  return 0;
}
