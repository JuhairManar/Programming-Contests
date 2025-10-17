// link - https://codeforces.com/contest/2162/problem/C


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void tob(int a,string &s){
    int r;
    while (a)
    {
        r=a%2;
        s+=to_string(r);
        a/=2;
    }
    reverse(s.begin(),s.end());

}

void solve(){
   int a,b,i,r,d;
   cin>>a>>b;   
   if(a==b){
    // cout<<"YES\n";
    cout<<"0\n";
    return;
   }
   string s1,s2;
   tob(a,s1);
   tob(b,s2);
   d=(int)s1.size()-(int)s2.size();
   if(d<0){
    cout<<"-1\n";
    return;
   }

   reverse(s2.begin(),s2.end());
   s2+=string(d,'0');
   reverse(s2.begin(),s2.end());

   int n1=s1.size(),n2=s2.size();
   int n=s1.size(),c=0;
   vector<int>v;
   v.push_back(0);
   for(i=n-1;i>=0;i--){
    if(s1[i]!=s2[i]){
        v.pb(1<<c);
    }
    c++;
   }

   cout<<v.size()<<"\n";
   for(auto g:v) cout<<g<<" ";
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
    while(t--) solve();


  return 0;
}
