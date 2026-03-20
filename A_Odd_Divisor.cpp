#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

bool solve(){
    return false;
}   

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        if((n&(n-1))==0) no;
        else yes;

    } 

    return 0;
}

/*

TC - O(1)
SC - O(1)
note  - every integer can be written as 2^k * m 
        (where m is an odd integer,there can be multiple odd numbers but fo simplicity we only consider one odd number) 

        so if n is a power of 2 then there is no odd divisior of it
        else there is one

        so to check if n is a power of 2 we use bitwise &

        Eg - 
        n   = 8 = 1000
        n-1 = 7 = 0111
        n & n-1 = 0000

        other way to do this problem is keep dividing n by 2 until it is no longer divisible by 2
        and if the final value is > 1 then answer is yes


*/
