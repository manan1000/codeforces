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
        string s;
        cin>>n>>s;
        
        int longestLessThan=0;
        int currentLessThan=0;
        int longestGreaterThan=0;
        int currentGreaterThan=0;

        if(s[0]=='<') currentLessThan=1;
        else currentGreaterThan=1;


        for(int i=1;i<s.length();i++){
            if(s[i]=='<'){
                if(s[i-1]=='<') currentLessThan++;
                else{
                    longestLessThan=max(longestLessThan,currentLessThan);
                    currentLessThan=1;
                }
            }
            else{
                if(s[i-1]=='>') currentGreaterThan++;
                else{
                    longestGreaterThan=max(longestGreaterThan,currentGreaterThan);
                    currentGreaterThan=1;
                }
            }
        }
        longestLessThan=max(longestLessThan,currentLessThan);
        longestGreaterThan=max(longestGreaterThan,currentGreaterThan);
        cout<<max(longestGreaterThan,longestLessThan)+1<<"\n";
    } 

    return 0;
}

/*

TC - O(N)
SC - O(N)
note - need to find the longest common substring (can be all < or all >)
       then the answer would be maxlen + 1

*/
