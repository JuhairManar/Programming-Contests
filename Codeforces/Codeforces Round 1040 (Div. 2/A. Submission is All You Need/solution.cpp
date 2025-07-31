// link - https://codeforces.com/contest/2130/problem/0


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int n,i,d,s=0;
    cin>>n;
    while(n--){
        cin>>d;
        if(d) s+=d;
        else s+=1;
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
