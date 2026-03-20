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
        string s;
        cin>>s;
        string t=s;
        int zeroes=0;
        int ones=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0') zeroes++;
            else ones++;
        }

        int pairs=min(zeroes,ones);
        if(pairs&1) cout<<"DA\n";
        else cout<<"NET\n";

    } 

    return 0;
}

/*

TC - 
SC - 
note  - 

*/
