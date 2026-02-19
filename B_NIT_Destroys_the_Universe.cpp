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
        int nonZero=0;
        int snaps=0;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(arr[i]==0){
                if(i!=0 && nonZero>0) {
                    snaps++;
                    nonZero=0;
                }
            }

            else nonZero++;
        }

        if(nonZero>0) snaps++;
        cout<<min(snaps,2)<<"\n";
    } 

    return 0;
}

/*

TC - O(N)
SC - O(N) for array
note - count the number of contiguous segments of non-zero integers

       NIT can destroy this universe in only 2 snaps:
       Snap 1: Select the entire range [1, n]. 
       Since the array contains 0s and some positive integers, the {mex} will be some integer w >= 1. 
       Now the entire array consists of w (no more zeros).
       
       Snap 2: Select the entire range [1, n]. Since the array now contains no 0s, the {mex} is 0. 
       The entire array becomes 0.

*/
