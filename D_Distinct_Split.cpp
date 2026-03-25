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
        string s;
        cin>>n;
        cin>>s;

        unordered_set<char> seenLeft,seenRoght;
        vector<int> prefix(n),suffix(n);
        for(int i=0;i<n;i++){
            seenLeft.insert(s[i]);
            prefix[i]=seenLeft.size();
        }

        for(int i=n-1;i>=0;i--){
            seenRoght.insert(s[i]);
            suffix[i]=seenRoght.size();
        }

        int maxDistinct=0;

        for(int i=0;i<n-1;i++){
            maxDistinct=max(maxDistinct,prefix[i]+suffix[i+1]);
        }

        cout<<maxDistinct<<"\n";
    } 

    return 0;
}

/*
 
TC - O(N) 
SC - O(N) because set is O(26) at max
note  - we can precalculate the number of distinct characters from the left and from the right.
*/
