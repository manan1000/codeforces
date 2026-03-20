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
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int count=0;
        bool notPossible=false;

        for(int i=n-1;i>=1;i--){
            while(arr[i]<=arr[i-1] && arr[i]!=0){
                arr[i-1]/=2;
                count++;
            }

            if(arr[i]<=arr[i-1]) {
                notPossible=true;
                break;
            }
        }
        int ans=notPossible?-1:count;
        cout<<ans<<"\n";
    } 

    return 0;
}

/*

TC - O(N)
SC - O(N) for array
note - iterate from behind and divide until strictly decreasing
       Edge case - what if you keep dividing and the element becomes 0
       You stop the dividing and check with the next element if still not following the rule of sorting then break

*/
