#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll> prefixSum(n+1,0);
        ll sum=0;
        for(int i=1;i<=n;i++){
            ll x;
            cin>>x;
            prefixSum[i]=prefixSum[i-1]+x;
        }
        
        while(q--){
            ll l,r,k;
            cin>>l>>r>>k;
            
            ll kSum=(r-l+1)*k;
            ll tSum=prefixSum[n];
            ll rangeSum=prefixSum[r]-prefixSum[l-1];

            ll totalSum=kSum+tSum-rangeSum;
            

            if(totalSum%2!=0) yes;
            else no;
        }
    } 

    return 0;
}

/*

TC - O(N+Q)
SC - O(N)
note - since it is 1 based indexing so the array size is n+1
       just storing the prefix sum works
       

*/
