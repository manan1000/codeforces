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
        int n,p;
        cin>>n>>p;

        vector<pair<int,int>> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i].second;
        }

        for(int i=0;i<n;i++){
            cin>>arr[i].first;
        }

        sort(arr.begin(),arr.end());
        
        ll cost = p;
        ll residentsNotified=1;
        int i=0;

        while(residentsNotified<n && i<n){
            if(arr[i].first>=p) break;

            int remainingNeeded=n-residentsNotified;
            int canShareTo=min(remainingNeeded,arr[i].second);

            cost+=(ll)canShareTo*arr[i].first;
            residentsNotified+=canShareTo;
            i++;
        }

        if(residentsNotified<n){
            cost+=(ll)(n-residentsNotified)*p;
        }

        cout<<cost<<"\n";
    } 

    return 0;
}

/*

TC - O(NlogN + N)
SC - O(2N)
note  - 

you tranmit it to one person only in the beginning
then you check if the lowest cost in the sorted arry is >=p
if true then no need to go in the while loop pak chanek can directly share to all resident at the cost of p for each
if false then we go in the loop

hint is that once one person has received the info and he transfer to his other peers
those other peers can transfer to others as well
agar pehle admi aur uska bhailog sabko bhej de rha hai to fir pak chanek ko dusre ko info dene ka zarurat nhi hai directly
(all considering that cost of transfer by resident is less than cost of transferring by pak chanek)

at the end you check if any residents left (because the cost of transfer by resident was higher than p)
then pak chanken will directly transfer to remianing

*/
