#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

int solve(int n, int maxFreq){

    if(maxFreq==n) return 0;
    
    int count=0;
    int remaining=n-maxFreq;
    while(remaining>0){

        //clone
        count++;

        //swap
        count+=min(remaining,maxFreq);

        remaining-=maxFreq;
        maxFreq*=2;

    }

    return count;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int> freq;
        int maxFreq=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            freq[x]++;
            maxFreq=max(maxFreq,freq[x]);
        }
        
        cout<<solve(n,maxFreq)<<"\n";
    } 

    return 0;
}

/*

TC - O(N) + O(logN) = O(N)
SC - O(N)
note  - once you clone an array and swap elements you can used the new array which has more maxFreq number, for next cloning 
        this will reduce the number of clones because every clone and swap you are doubling the freq of the maxFreq number

*/
