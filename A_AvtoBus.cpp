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
        ll n;
        cin>>n;
        if(n&1==1 || n<4) cout<<-1<<"\n";
        else{

            ll minBuses=(n+5)/6;
            ll maxBuses=n/4;

            cout<<minBuses<<" "<<maxBuses<<"\n";
        }
        


    } 

    return 0;
}

/*

TC - O(1)
SC - O(1)
note - 

The LogicBefore calculating, we must check for impossible cases:Odd numbers: Since both 4 and 6 are even, any sum of them must be even. If $n$ is odd, output -1.Too small: The smallest bus has 4 wheels. If $n < 4$, it's impossible. Output -1.1. Finding the Minimum ($x$)To minimize the number of buses, we want each bus to carry as many wheels as possible. We prioritize the 6-wheel buses.If $n$ is divisible by 6 ($n \% 6 == 0$), the minimum is $n / 6$.If there is a remainder ($n \% 6 == 2$ or $n \% 6 == 4$), we only need one or two adjustments (replacing 6-wheelers with 4-wheelers) to cover the total. In both cases, this adds one more bus than the integer division $n/6$.Formula: minBuses = (n + 5) / 6; (This is equivalent to $\lceil n/6 \rceil$).2. Finding the Maximum ($y$)To maximize the number of buses, we want each bus to carry as few wheels as possible. We prioritize the 4-wheel buses.Since $n$ is even, we can always fill the total using 4-wheelers and at most one 6-wheeler (to handle the case where $n$ is not divisible by 4).Whether $n$ is $4k$ or $4k+2$, the total count of buses will always be $n/4$ (using integer division).Formula: maxBuses = n / 4;

*/
