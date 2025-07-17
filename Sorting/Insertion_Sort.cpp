#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int k=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>k){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
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

    InsertionSort(arr,n);

    cout<<"\nSorted elements : ";
    Display(arr,n);

    return 0;

}


