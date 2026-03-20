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
        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);

        int maxLen=0;
        int currentLen=1;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]<=k) currentLen++;
            else {
                maxLen=max(maxLen,currentLen);
                currentLen=1;
            }
        }
        maxLen=max(maxLen,currentLen);

        cout<<n-maxLen<<"\n";
    } 

    return 0;
}

/*

TC - O(Nlog2(N))
SC - O(N)
note - 

*/
