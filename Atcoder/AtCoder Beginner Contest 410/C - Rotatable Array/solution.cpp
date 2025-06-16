// link - https://atcoder.jp/contests/abc410/tasks/abc410_c


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n,q,i,of=0,t,ind,v;
    cin>>n>>q;
    long a[n];
    for(i=0;i<n;i++) a[i]=i+1;
    while(q--){
        cin>>t;

        if(t==1){
            cin>>ind>>v;
            ind--;
            a[(ind+of)%n]=v;
        }

        else if(t==2){
            cin>>ind;
            ind--;
            cout<<a[(ind+of)%n]<<"\n";
        }

        else{
            cin>>v;
            v%=n;
            of=(of+v)%n;
        }
    }
                                        


  return 0;
}
