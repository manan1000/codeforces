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

        sort(arr,arr+n);
 
        if(arr[0]==arr[n-1]) cout<<"NO\n";
        else {
            cout<<"YES\n"<<arr[n-1]<<" ";
            for(int i=0;i<n-1;i++) cout<<arr[i]<<" ";
            cout<<"\n";
        }
    } 

    return 0;
}

/*

TC - O(NlogN)
SC - O(N)
note - sort the array and compare the first and last element 
       if all elements are same then the answer is NO (check first and last same after sorting)
       else the answer is possible but we need to print the max element first then the rest because - 
       Eg - arr = 2,4,5,2,9
       after sorting array = 2,2,4,5,9 , even though the first and last element are not same the order is wrong
       this violates the condition hence to prevent that we print the largest number first

*/
