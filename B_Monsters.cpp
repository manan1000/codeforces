#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

int solve(){
    return 0;
}

bool comp(pair<int,int> &a, pair<int,int> &b){
    if(a.first==b.first){
        return a.second<b.second;
    }

    return a.first>b.first;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> health;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%k==0) x=k;
            else x=x%k;
            health.push_back({x,i});
        }

        sort(health.begin(),health.end(),comp);
        
        for(auto it: health){
            cout<<it.second+1<<" ";
        }
        cout<<"\n";
    } 

    return 0;
}

/*

TC - O(NlogN + N)
SC - O(N)
note  - 
no need to simulate the hits one at a time because consider the case the health is 10^9 and k=1 
then monster 1 alone would run for 10^9 which exceeds the time limit

so the idea is eventually all monster will be hit at some point such that their health left is <=k

so we mod the health with k to bring down the health 
and if health % k == 0 then we set health to k 
because if we set health to 0 then we would lose the order becasue some monsters will die before others


*/
