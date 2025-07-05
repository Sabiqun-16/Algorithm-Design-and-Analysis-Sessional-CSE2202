#include<bits/stdc++.h>
using namespace std;

int FiboRecursive(int n){
    if(n<=1) return n;
    return FiboRecursive(n-1)+FiboRecursive(n-2);
}

int main(){
    int n=7;
    int result=FiboRecursive(n);
    cout<<"nth Fibonacci : "<<result<<endl;
    return 0;
}


