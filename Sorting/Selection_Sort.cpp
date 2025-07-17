#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]) mini=j;
        }
        swap(arr[i],arr[mini]);
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

    SelectionSort(arr,n);

    cout<<"\nSorted elements : ";
    Display(arr,n);

    return 0;

}
