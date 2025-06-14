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
    int n,q,i,j,min_ball,mbi,c,t;
    cin>>n>>q;
    int a[q];
    for(i=0;i<q;i++) cin>>a[i];
    vector<int>v(n+1,0);

    for(i=0;i<q;i++){
        c=a[i];
        if(c){
            v[c]++;
            t=c;
        }
        else{
            min_ball=q;
            mbi=n;

            for(j=n;j>=1;j--){
                if(v[j]<min_ball){
                    min_ball=v[j];
                    mbi=j;
                }
                else if(v[j]==min_ball) mbi=j;
            }

            v[mbi]++;
            t=mbi;
        }

        cout<<t<<" ";
    }


  return 0;
}
