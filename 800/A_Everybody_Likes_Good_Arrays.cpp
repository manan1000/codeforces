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

        int ans=0;
        for(int i=0;i<n;){
            int j=i+1;
            while(j<n && arr[i]%2==arr[j]%2){
                ans++;
                j++;
            }
            i=j;
        }
        cout<<ans<<"\n";
    } 

    return 0;
}

/*

TC - O(N)
SC - O(N)
note - we just need to find the continuous even/odd series and add  (length of series - 1) to the answer
       because to convert it to alternate parity sequence we need to perform the given operation

*/
