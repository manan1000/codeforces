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
        ll n;
        cin>>n;

        if(n%25==0) cout<<0<<"\n";
        else{
            int count=0;
            int lastNumber;
            while(n!=0){
                lastNumber=n%10;
                if(lastNumber==0 || lastNumber==5) break;
                else count++;
                n/=10;
            }
            n/=10;
            if(lastNumber==0){
                while(n!=0){
                    int secondLastNumber=n%10;
                    if(secondLastNumber==0 || secondLastNumber==5) break;
                    else count++;
                    n/=10;
                }
            }
            else {
                while(n!=0){
                    int secondLastNumber=n%10;
                    if(secondLastNumber==2 || secondLastNumber==7) break;
                    else count++;
                    n/=10;
                }
            }

            cout<<count<<"\n";
        }
    } 

    return 0;
}

/*

TC - 
SC - 
note  - 

*/
