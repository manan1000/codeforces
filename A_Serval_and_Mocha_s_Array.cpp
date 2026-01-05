#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        bool flag=false;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(arr[i],arr[j])<=2){
                    flag=true;
                    break;
                }
            }
        }

        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    } 

    return 0;
}

/*

TC - O(N^2 * log2 min(arr[i],arr[j])) = 10^4 * log2(10^6) = 10^4 * 20 = 2*10^5
SC - O(N)
note - since we need to reorder we just need to find 2 elements whose gcd is <=2 because as the prefix array grows the gcd keeps going lower

*/
