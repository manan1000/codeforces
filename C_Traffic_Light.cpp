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
        char c;
        string s;
        cin>>n>>c>>s;
        if(c=='g') {
            cout<<0<<"\n";
            continue;
        }
        
        s+=s;
        n*=2;
        int lastGreenIndex=-1;
        int maxTime=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='g') {
                lastGreenIndex=i;
            }

            if(s[i]==c){
                maxTime=max(maxTime,lastGreenIndex-i);
            }
        }

        cout<<maxTime<<"\n";
    } 

    return 0;
}

/*

TC - O(N)
SC - O(1)
note  - make s twice and then iterate from behind keeping track of last green index

*/
