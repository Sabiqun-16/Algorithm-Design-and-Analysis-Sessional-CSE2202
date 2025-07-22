#include<bits/stdc++.h>
using namespace std;

int knapsack(int capa,int wt[],int val[],int n){
    int dp[n+1][capa+1];
    for(int i=0;i<=n;i++){
        for(int w=0;w<=capa;w++){
            if(i==0 || w==0) dp[i][w]=0;
            else if (wt[i-1]>capa) dp[i][w]=dp[i-1][w];
            else dp[i][w]=max(val[i-1]+dp[i-1][w-wt[i-1]],dp[i-1][w]);
        }
    }
    return dp[n][capa];
}

int main(){
    int val[]={60,100,120};
    int wt[]={10,20,30};
    int capa=50;
    int n=sizeof(val)/sizeof(val[0]);

    cout<<"Result : "<<knapsack(capa,wt,val,n)<<endl;

    return 0;
}

