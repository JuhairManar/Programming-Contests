// link - https://www.codechef.com/problems/TWOROLL

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int x,y,mn,mx,d;
    cin>>x>>y;
    mn=y;mx=y+5;

    d=50-x;
    if(mn*2<=d && mx*2>=d){
        cout<<"Yes\n";
        return ;
    }
    cout<<"No\n";
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
