#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];

        map<int,int> frequency;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            frequency[arr[i]]++;
        }

        if(frequency.size()>=3) cout<<"No";
        else{
            int first=frequency.begin()->second;
            int second=frequency.rbegin()->second;

            if(first==second) cout<<"Yes";
            else if(n%2==1 && abs(first-second)<=1) cout<<"Yes";
            else cout<<"No";
        }
        cout<<"\n";
    } 

    return 0;
}