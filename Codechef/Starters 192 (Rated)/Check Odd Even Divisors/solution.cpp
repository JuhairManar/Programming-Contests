// link - https://www.codechef.com/problems/ODDEVENDIV


#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    if(b==0 && a){
        cout<<"Yes\n";
        return;
    }
    if(a && b && b%a==0 ){
        cout<<"Yes\n";
        return;
    }
    cout<<"No\n";
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    solve();
	}

}
