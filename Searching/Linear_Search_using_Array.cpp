#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]== k) return i;
    }
    return -1;
}


int main()
{
    cout<<"Enter the number of element : ";
    int n;
    cin>>n;

    cout<<"\nEnter the elements : ";
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<endl;

    cout<<"\nEnter the element to search for  : ";
    int k;
    cin>>k;
    cout<<endl;
    int res=LinearSearch(arr,n,k);


    if(res!=-1)
        cout<<"\nElement found at the index of : "<<res;
    else
        cout<<"/nNot found."<<endl;
    return 0;

}

