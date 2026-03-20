#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

int solve(string s , string comb){
    int count=0;
    int curIndex=1;

    for(int i=s.length()-1;i>=0;i--){
        if(s[i]==comb[curIndex]) curIndex--;
        else count++;

        if(curIndex<0) return count;
    }

    return INT_MAX;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=INT_MAX;
        vector<string> validCombinations={"00","25","50","75"};
        for(string comb: validCombinations){
            ans=min(ans,solve(s,comb));
        }

        cout<<ans<<"\n";
    } 

    return 0;
}

/*

TC - 
SC - 
note  - 

*/
