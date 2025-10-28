/// link - https://codeforces.com/contest/2156/problem/A

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
   int i,n,s=0;
   cin>>n;
   while(n>2){
    int r=n%3,d=n/3;
    s+=d;
    n=d+r;
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
