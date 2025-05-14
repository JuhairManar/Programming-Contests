// link - https://www.codechef.com/START186D/problems/JUMPAB


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    long n,m,a,b;
    cin>>n>>m>>a>>b;

    if((n*a)==m || (n*b)==m){
        cout<<"Yes\n";
        return ;
    }

    long mx=max(a,b),mn=min(a,b);
    if(mn*n>m){
        cout<<"No\n";
        return ;
    }

    long lo=1,r=n,mid=(lo+r)/2;

    while(lo<=r){
        long x=mid*mx,y,d=(n-mid)*mn;

        if(x+d>m){
            r=mid-1;
        }
        else if(x+d<m){
            lo=mid+1;
        }
        else{
            cout<<"Yes\n";
            return ;
        }
        mid=(lo+r)/2;
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
    
    while(t--){
        solve();
    }


  return 0;
}
