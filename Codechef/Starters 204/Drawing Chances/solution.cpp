// link - https://www.codechef.com/START204D/problems/DRAWCH


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int n,m,a=0,b=0,dp,dm;
    cin>>n>>m;
    string s;
    cin>>s;
    for(auto g:s){
        if(g=='1') a++;
        else b++;
    }
    dm=n-m;
    dp=abs(a-b);

    if(dm>=dp && (dm-dp)%2==0) {
        cout<<"Yes\n";
    }
    else cout<<"No\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
                                        


  return 0;
}
