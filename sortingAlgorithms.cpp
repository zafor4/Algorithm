#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void selectionSort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        int min_indx=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[min_indx]){
                min_indx=j;
            }
        }
        if (min_indx!=i){
            swap(arr[min_indx],arr[i]);
        }
    }

}


void insertionSort(int arr[],int n){
    int key,j;
    for (int i=1;i<n;i++){
        key=arr[i];
        j=i-1;

        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;

        }
        arr[j+1]=key;
    }
}

// marge sort

void merge(int arr[],int beg,int mid,int end){
    int n1=mid-beg+1;
    int n2=end-mid;

    int leftArray[n1],rightArray[n2];

    for (int i=0;i<n1;i++){
        leftArray[i]=arr[beg+i];
    }
    for (int j=0;j<n2;j++){
        rightArray[j]=arr[mid+1+j];
    }

    int i=0;
    int j=0;
    int k=beg;

    while(i<n1 && j<n2){
        if (leftArray[i]<=rightArray[j]){
            arr[k]=leftArray[i];
            i++;
        }
        else {
            arr[k]=rightArray[j];
            j++;
        }
        k++;
    }
        while (i<n1){
            arr[k]=leftArray[i];
            i++;
            k++;
        }

        while (j<n2){
            arr[k]=rightArray[j];
            j++;
            k++;
        } 

}

void margeSort(int arr[],int beg,int end){
    if (beg<end){
        int mid=beg+(end-beg)/2;
        margeSort(arr,beg,mid);
        margeSort(arr,mid+1,end);
        merge(arr,beg,mid,end);

    }
}

// quick sort

int partition(int arr[], int start, int end) {
    int i = start - 1;
    int pivot = arr[end];
    for (int j = start; j < end; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1;
}

void quick(int arr[], int start, int end) {
    if (start < end) {
        int pivot = partition(arr, start, end);
        quick(arr, start, pivot - 1);
        quick(arr, pivot + 1, end);  
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    // insertionSort(arr,n);
    // margeSort(arr,0,n-1);
    // quick(arr,0,n-1);
    bubbleSort(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }





    return 0;
}