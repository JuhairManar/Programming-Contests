//link- https://www.codechef.com/problems/WOLFDOWN

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
   int n,i,c=0;       
    cin>>n;
    string s;
    cin>>s;

    for(i=0;i<n;i++){
        if(s[i]=='1') break;
        c++;
    }

    cout<<c<<"\n";
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
