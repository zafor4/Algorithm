#include<stdio.h>

void bubbleSort(int arr[],int size){
    for (int i=0;i<size;i++){
        for (int j=0;j<(size-i)-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[]={8,3,9,2,4,1};
    int size=sizeof(arr)/sizeof(int);
    printf("Array elements after bubble sort:\n");
    bubbleSort(arr,size);
    for (int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}