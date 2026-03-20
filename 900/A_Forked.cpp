#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int a,b,kx,ky,qx,qy,count=0;
        cin>>a>>b>>kx>>ky>>qx>>qy;
        
        int delrow[]={-1,-1,1,1};
        int delcol[]={-1,1,-1,1};

        set<pair<int,int>> kingMoves;
        set<pair<int,int>> queenMoves;

        for(int i=0;i<4;i++){
            kingMoves.insert({kx+(delrow[i]*a),ky+(delcol[i]*b)});
            kingMoves.insert({kx+(delrow[i]*b),ky+(delcol[i]*a)});
        }

        for(int i=0;i<4;i++){
            queenMoves.insert({qx+(delrow[i]*a),qy+(delcol[i]*b)});
            queenMoves.insert({qx+(delrow[i]*b),qy+(delcol[i]*a)});
        }

        for(auto it: kingMoves){
            if(queenMoves.find(it)!=queenMoves.end()) count++;
        }

        cout<<count<<"\n";
    } 

    return 0;
}

/*

TC - O(1)
SC - O(1)
note - generate all places from where the knight can attack the king and do the same for queen
       check the positions which match king and queen
       however make sure to use a set datastructure to store the positions, 
       because if a==b then it will lead to double counting of knight coordinates
       which will give a wrong answer 

*/
