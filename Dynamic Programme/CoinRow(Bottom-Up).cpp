#include<bits/stdc++.h>
using namespace std;

int coinRowDP(const vector<int>&coins){
    int n=coins.size();
    if(n==0) return 0;

    vector<int>F(n+1,0);
    F[1]=coins[0];

    for(int i=2;i<=n;++i){
        F[i]=max(coins[i-1]+F[i-2],F[i-1]);
    }

    return F[n];
}

int main(){
    vector<int>coins={5,1,2,10,6,2};
    int max_sum=coinRowDP(coins);
    cout<<"Maximum sum of coins: "<< max_sum<<endl;
    return 0;
}

