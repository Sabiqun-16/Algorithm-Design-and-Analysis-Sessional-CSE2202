#include<bits/stdc++.h>
using namespace std;

int Partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;

    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void QuickSort(int arr[],int low,int high){
    if(low< high){
        int pi=Partition(arr,low,high);
        QuickSort(arr,low,pi-1);
        QuickSort(arr,pi+1,high);
    }
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

    cout<<"\nOriginal elements : ";
    Display(arr,n);

    QuickSort(arr,0,n-1);

    cout<<"\nSorted elements : ";
    Display(arr,n);

    return 0;

}

