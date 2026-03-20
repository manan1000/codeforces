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
        int maxK=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            int difference=abs(arr[i]-(i+1));
            maxK=__gcd(maxK,difference);
        }
        cout<<maxK<<"\n";
    } 

    return 0;
}

/*

TC - O(N)
SC - O(N)
note - 
The Core Intuition: "The Frog Jump"
Imagine every number in the array is a frog that is currently sitting on the wrong lily pad.
The frog with the number 3 wants to go to Index 3.
The frog with the number 5 wants to go to Index 5.
The rule of the game is: You must pick a fixed jump size $k$.Every time you swap two frogs, they move exactly distance $k$. 
This means if a frog needs to travel a total distance of 10, it can get there by making jumps of size 2 ($2+2+2+2+2$), or jumps of size 5 ($5+5$), but it cannot get there with a jump size of 3 (3+3+3 = 9... close, but stuck!).
Therefore: The jump size $k$ must be a divisor of the distance every single frog needs to travel.

*/
