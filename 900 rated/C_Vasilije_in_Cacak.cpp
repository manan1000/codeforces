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
        ll n,k,sum;
        cin>>n>>k>>sum;

        ll min_sum=(k*(k+1))/2;
        ll max_sum=(n*(n+1))/2 - ((n-k)*(n-k+1))/2;

        if(min_sum<=sum && sum<=max_sum) yes;
        else no;
    } 

    return 0;
}

/*

TC - O(1)
SC - O(1)
note - if the sum lies between the min and max sum or k distinct elements then it is possible

*/
