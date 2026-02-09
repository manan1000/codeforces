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
        int n;
        cin>>n; 
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        int maxi=*max_element(arr,arr+n);
        int mini=*min_element(arr,arr+n);

        if(arr[0]==mini || arr[n-1]==maxi) cout<<maxi-mini<<"\n";
        else{
            int maxDifference=max(arr[0]-arr[1],arr[n-2],arr[n-1]);

            for(int i=1;i<n-1;i++){
                maxDifference=max(maxDifference, arr[i]-arr[i+1]);
            }

            cout<<maxDifference<<"\n";
        }
    } 

    return 0;
}

/*

TC - 
SC - 
note - 

*/
