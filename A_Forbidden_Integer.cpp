#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;

        if(x!=1){
            cout<<"YES\n"<<n<<"\n";
            for(int i=0;i<n;i++) cout<<1<<" ";
            cout<<"\n";
        }
        else{
            if(k==1 || (k==2 && n%2!=0)) cout<<"NO\n";
            else if(n%2==0){
                cout<<"YES\n";
                cout<<n/2<<"\n";
                for(int i=0;i<n/2;i++) cout<<2<<" ";
                cout<<"\n";
            }
            else{
                cout<<"YES\n";
                cout<<(n-3)/2 + 1<<"\n";
                for(int i=0;i<(n-3)/2;i++) cout<<2<<" ";
                cout<<3<<"\n";
            }
        }
    } 

    return 0;
}

// TC - O(N)
// SC - O(1)
// note - if x !=1 then we can always create n using 1 , if x==1 then it depends on k , but in general we can always generate n using 2 and 3