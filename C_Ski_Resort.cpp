#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

int solve(){
    return 0;
}

int computeNcR(int n,int c){
    int nprd=1;
    int cprd=1;
    for(int i=1;i<=c;i++){
        nprd*=n--;
        cprd*=i;
    }

    return nprd/cprd;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;

        int currentMaxLength=0;
        ll ways=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=q) currentMaxLength++;
            else{
                if(currentMaxLength>=k) {
                    ll m=(currentMaxLength-k)+1;
                    ways+=(m*(m+1))/2;
                }

                currentMaxLength=0;
            }
        }

        if(currentMaxLength>=k) {
            ll m=(currentMaxLength-k)+1;
            ways+=(m*(m+1))/2;
        }

        cout<<ways<<"\n";
    } 

    return 0;
}

/*

TC - O(N)
SC - O(1)
note  - 

The Logic
Let's say you find a segment of valid days (temperature <=q) with a length of L. 
You want to find how many sub-segments within that block have a length of at least k.
If the sub-segment length is exactly k, there are L - k + 1 possible start positions.
If the sub-segment length is k + 1, there are L - (k+1) + 1 = L - k possible start positions
If the sub-segment length is L, there is exactly 1 possible start position.
The total number of ways for a segment of length L is the sum:(L - k + 1) + (L - k) + ... + 1
This is an arithmetic progression. Let m = L - k + 1. 
The sum of the first m integers is m*m+1/2

*/
