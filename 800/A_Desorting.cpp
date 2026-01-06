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

        bool is_sorted=true;
        int mini_diff=INT_MAX;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]) is_sorted=false;

            mini_diff=min(mini_diff, abs(arr[i]-arr[i-1]));
        }

        if(!is_sorted) cout<<0<<"\n";
        else cout<<(mini_diff/2)+1<<"\n";
    } 

    return 0;
}

// TC - O(2N)
// SC - O(1)
// note - if unsorted then ans is zero , if sorted then you need to find the min fidderence of adjacent numbers