// link - https://www.codechef.com/problems/FLOWERBUY


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int n,a,d,r,b,s;
    cin>>n;
    r=n%3;
    if(r==0){
        s=(n/3)*5;
    }
    else if(r==1){
        d=n/3;
        s=((d-1)*5)+8;
    }
    else{
        d=n/3;
        s=(d*5)+4;
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
