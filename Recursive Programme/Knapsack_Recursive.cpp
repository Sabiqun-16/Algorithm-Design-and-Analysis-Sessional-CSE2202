#include <bits/stdc++.h>
using namespace std;

int knapsackRecursive(int capa,int wt[],int val[],int n){
    if(n==0 || capa==0) return 0;
    if(wt[n-1]>capa) return knapsackRecursive(capa,wt,val,n-1);
    int maximum=max(val[n-1]+knapsackRecursive(capa-wt[n-1],wt,val,n-1)
                    ,knapsackRecursive(capa,wt,val,n-1));
    return maximum;
}

int main() {
    int val[]={60,100,120};
    int wt[]={10,20,30};
    int capa=50;
    int n=sizeof(val)/sizeof(val[0]);

    cout<<"Result: "<<knapsackRecursive(capa,wt,val,n)<<endl;

    return 0;
}
