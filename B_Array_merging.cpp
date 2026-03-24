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
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        int ans=0;
        vector<int> aFreq(2*n+1,0);
        vector<int> bFreq(2*n+1,0);


        // Array a
        int currElement=a[0];
        int count=1;
        for(int i=1;i<n;i++){
            if(a[i]==currElement){
                count++;
            }
            else{
                aFreq[currElement]=max(aFreq[currElement],count);
                currElement=a[i];
                count=1;
            }
        }
        aFreq[currElement]=max(aFreq[currElement],count);

        currElement=b[0];
        count=1;
        for(int i=1;i<n;i++){
            if(b[i]==currElement){
                count++;
            }
            else{
                bFreq[currElement]=max(bFreq[currElement],count);
                currElement=b[i];
                count=1;
            }
        }
        bFreq[currElement]=max(bFreq[currElement],count);
        
        for(int i=1;i<=2*n;i++){
            ans=max(ans,aFreq[i]+bFreq[i]);
        }
        cout<<ans<<"\n";
    } 

    return 0;
}

/*

TC - O(N)
SC - O(N)
note  - 

consider there are 2 lines and you are merging them into one line, there are many ways to do it
you can take 1 from each line
or take 3 from 1 then 2 from other 
or all from 1st and then 2nd
or random ways

goal is to maximise the subarray length of same elements , so we need to merge in that way

consider 

a = 1 2 1
b = 1 2 1

ans=2
becasue 

even if we take 1 from 1st then 1 from second we get 1 1 ...
but next element for both array is 2 so we need to take 2 so merge = 1 1 2 ...
which means that when merging we can only take max continuous subarray length of an element in array1 + same in array2
we cannot take the full frequency of the element in array1 + same in array2

because as we saw in the above case the element 2 blocked /broke our subarray


*/
