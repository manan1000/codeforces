#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

int solve(){
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll x0,n;
        cin>>x0>>n;
        for(ll i=n - n%4 +1 ;i<=n;i++){
            if(x0 & 1) x0+=i;
            else x0-=i;
        }

        cout<<x0<<"\n";
    } 

    return 0;
}

/*

TC - O(1)
SC - O(1)
note  - every 4 jumps it comes back to the original position (do dry run)
        so we mod by 4 and that many times the loop will run

*/
