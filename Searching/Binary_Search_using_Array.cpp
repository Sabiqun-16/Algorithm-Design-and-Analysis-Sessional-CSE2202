#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int n,int k){
    int left=0,right=n-1,mid;
    while(left<=right){
        mid=left+(right-left)/2;
        if(arr[mid]==k) return mid;
        else if(arr[mid]<k) left=mid+1;
        else right=mid-1;
    }
    return -1;
}

void Display(int arr[],int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
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

    cout<<"\nSorted elements for Binary Search :";
    sort(arr,arr+n);
    Display(arr,n);

    cout<<"\nEnter the element to search for  : ";
    int k;
    cin>>k;
    cout<<endl;
    int res=BinarySearch(arr,n,k);


    if(res!=-1)
        cout<<"\nElement found at the index of : "<<res;
    else
        cout<<"/nNot found."<<endl;
    return 0;

}
