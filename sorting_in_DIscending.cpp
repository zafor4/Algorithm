#include<bits/stdc++.h>
using namespace std;

int pertition(int arr[],int start,int end){
    int pivot=arr[end];
    int i=start-1;
    for (int j=start;j<end;j++){
        if (arr[j]>=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[end]);
    return i+1;

}


void quick(int arr[],int start ,int end){
        if (start<end){
    int p=pertition(arr,start,end);

    quick(arr,start,p-1);
    quick(arr,p+1,end);
        }
}



int main(){
        int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
        quick(arr,0,n-1);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }



    return 0;
}