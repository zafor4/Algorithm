#include<stdio.h>
void insertionSort(int arr[],int size){
    int item,j;
    for (int i=1;i<size;i++){
        item=arr[i];
        j=i-1;
            while(j>=0 && arr[j]>item){
            arr[j+1]=arr[j];
            j=j-1;
        }
    arr[j+1]=item;

    }
}
int main(){
    int arr[]={8,3,9,2,4,1};
    int size=sizeof(arr)/sizeof(int);
    insertionSort(arr,size);
    printf("Array elements after insertion sort:\n");
    for (int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}