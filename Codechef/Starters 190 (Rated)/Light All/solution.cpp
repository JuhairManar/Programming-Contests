// link - https://www.codechef.com/START190D/problems/LTALL


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    int n,i;
    cin>>n;

    string s;
    cin>>s;

    if(n==1){
        if(s[0]=='1'){
            cout<<"Yes\n";
            return ;
        }
        cout<<"NO\n";
        return ;
    }
    vector<int>a(n,0);

    for(i=0;i<n;i++){
        a[i]=s[i]-'0';
    }

    if(s[0]=='1' && a[0]) s[1]='1';

    for(i=1;i<n-1;i++){
        if(s[i]=='1' && a[i]){
            if(s[i-1]=='0'){
                s[i-1]='1';
                continue;
            }
            else{
                s[i+1]='1';
                continue;
            }
        }
    }

    if(s[n-1]=='1' && a[n-1]){
        s[n-2]='1';
    }

    for(auto g:s){
        if(g=='0'){
            cout<<"No\n";
            return;
        }
    }

    cout<<"Yes\n";
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
