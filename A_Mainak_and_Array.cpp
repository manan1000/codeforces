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

        int maxDifference=0;

        //disrupt first place
        for(int i=0;i<n-1;i++) maxDifference=max(maxDifference,arr[n-1]-arr[i]);

        // disrupt last place 
        for(int i=1;i<n;i++) maxDifference=max(maxDifference,arr[i]-arr[0]);


        //disrupt both first and last
        for(int i=0;i<n-1;i++) maxDifference=max(maxDifference,arr[i]-arr[i+1]);

        cout<<maxDifference<<"\n";
    } 

    return 0;
}

/*

TC - O(N)
SC - O(N) for array
note - disrupt the first place then last place and then both
       Meaning there are 3 steps to find the answer
       First step - Fix the last element and we find the best first element accordingly (note the last element does not have be the max element)
       Second step - Fix the first element and we find the best last element accordingly (note the first element does not have be the min element)
       Third step - nothing is fixed we rotate the entire array and check adjacent elements to find max diff
       We dont have to account for the case when it does not need to be rotated because it gets calculated in the first 2 steps
*/
