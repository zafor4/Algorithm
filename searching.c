#include<stdio.h>
int linearsearch(int arr[],int data,int size){
    for (int i=0;i<size;i++){
        if (arr[i]==data){
            return i;
        }

    }
    return -1;
}
int binarysearch(int arr[],int size,int data){
    int low=0;
    int high=size-1;
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if (arr[mid]==data){
            return mid;
        }
        else if (arr[mid]<data){
            low=mid+1;
        }
        else if (arr[mid]>data){
            high=mid-1;
        }

    }
}
int main(){
int arr[]={1,2,3,4,5,6};
int data=3;
int size=sizeof(arr)/sizeof(int);
int result=binarysearch(arr,size,data);
printf("%d\n",result);

    return 0;
}