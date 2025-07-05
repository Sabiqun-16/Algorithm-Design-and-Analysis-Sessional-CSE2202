#include<bits/stdc++.h>
using namespace std;

const int MAX = 100;

double greedyKnapsack(int W,int value[],int weight[],int n){
    double ratio[MAX];
    int index[MAX];

    for (int i=0;i<n;i++){
        ratio[i]=(double)value[i]/weight[i];
        index[i]=i;
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ratio[i]<ratio[j]){
                swap(ratio[i],ratio[j]);
                swap(index[i],index[j]);
            }
        }
    }

    double total=0.0;

    for(int i=0;i<n;i++){
        int idx=index[i];
        if(W>=weight[idx]){
            W-=weight[idx];
            total+=value[idx];
        }
        else{
            total+=value[idx]*((double)W/weight[idx]);
            break;
        }
    }

    return total;
}

int main(){
    int value[]={60,100,120};
    int weight[]={10,20,30};
    int W=50;
    int n=sizeof(value)/sizeof(value[0]);

    cout<<"Result:"<<greedyKnapsack(W,value,weight,n)<<endl;
    return 0;
}
