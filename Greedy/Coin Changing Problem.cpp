#include<bits/stdc++.h>
using namespace std;

void greedyCoinChange(int amount, int coins[], int n) {
    sort(coins,coins+n,greater<int>());
    for(int i=0;i<n;i++){
        while(amount>=coins[i]){
            cout<<coins[i]<<" ";
            amount-=coins[i];
        }
    }
    if(amount!=0) cout<<"\nCannot make exact change with the given denominations.";
}

int main() {
    int coins[]={1,5,10,25};
    int n=sizeof(coins)/sizeof(coins[0]);
    int target=30;
    greedyCoinChange(target,coins,n);
    return 0;
}
