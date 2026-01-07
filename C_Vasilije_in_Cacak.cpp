#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPossible(ll n,ll k,ll sum){
    for(ll i=n;i>=1;i--){
        if(i<=sum) {
            sum-=i;
            k--;
        }

    }

    return k==0?true:false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll n,k,sum;
        cin>>n>>k>>sum;

        if(isPossible(n,k,sum)) cout<<"YES\n";
        else cout<<"NO\n";
    } 

    return 0;
}

/*

TC - 
SC - 
note - 

*/
