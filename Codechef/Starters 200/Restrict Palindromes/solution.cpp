// link - https://www.codechef.com/START200D/problems/RESPAL

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int i,n;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<char(97+(i%5));
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
    while (t--)
    {
        solve();
    }
                                        


  return 0;
}
