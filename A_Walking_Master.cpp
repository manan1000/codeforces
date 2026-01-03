#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;

        if(d<b || c-a>d-b) cout<<-1<<"\n";
        else{
            ll distance=0;
            ll vertical=d-b;
            ll horizontal=abs(c-(a+vertical));
            distance=horizontal+vertical;
            cout<<distance<<"\n";
        }
    } 

    return 0;
}

/*

TC - 
SC - 
note - 

*/
