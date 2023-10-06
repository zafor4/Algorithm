#include<iostream>
using namespace std;


int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid;
    while (end>=start){
        mid=start+(end-start)/2;

        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            start=mid+1;
        }
        else if (arr[mid]>key){
            end=mid-1;
        }
    }
}

int main(){
    int arr[]={5,2,4,8,12,9};
    int n=6;
    cout<<binarySearch(arr,n,12);


    return 0;
}
