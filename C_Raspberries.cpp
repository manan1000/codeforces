#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

int solve(){
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> arr(n);
        int prd=1;
        int ans=k;
        int even=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0) even++;

            ans=min(ans,( k - (arr[i] % k ) ) % k);
        }

        if(k==4){
            int case4=0;
            if(even>=2) case4=0;
            else if(even==1) case4=1;
            else case4=2;
            ans=min(ans,case4);
        }
        cout<<ans<<"\n";
    } 

    return 0;
}

/*

TC - O(N)
SC - O(1)
note  - 
find out how many +1 is required to make arr[i] divisible by k = k - (arr[i] % k ) ) % k  
(the %k at end is necessary because if arr[i]%k==0 then ops = k-0 which will give wrong answer so we do %k)

case4 (where k=4)
if k=4 then we can achieve the answer by
1)make arr[i] divisivle by 4
OR
2)make 2 elements divisible by 2 becasue (4 = 2 x 2)

for 2)
find out how many even arr[i] are there
1)even>=2 ?  ops = 0 
2)aven==1 ? then we just need to make one more element even so just one +1 required on any element
3)even==0 ? then we need to do +1 on 2 elements 

*/
