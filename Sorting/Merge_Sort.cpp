#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int left,int mid,int right){
    int L=mid-left+1;
    int R=right-mid;

    int tempLeft[L],tempRight[R];

    for(int i=0;i<L;i++)
        tempLeft[i]=arr[left+i];

    for(int i=0;i<R;i++)
        tempRight[i]=arr[mid+1+i];

    int i=0,j=0,k=left;
    while(i<L && j<R){
        if(tempLeft[i]<=tempRight[j]){
            arr[k]=tempLeft[i];
            i++;
        }
        else{
            arr[k]=tempRight[j];
        j++;
        }
        k++;
    }

    while(i<L){
        arr[k]=tempLeft[i];
        i++;
        k++;
    }

     while(j<R){
        arr[k]=tempRight[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[],int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;
        MergeSort(arr,left,mid);
        MergeSort(arr,mid+1,right);

        merge(arr,left,mid,right);
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

    MergeSort(arr,0,n-1);

    cout<<"\nSorted elements : ";
    Display(arr,n);

    return 0;

}


