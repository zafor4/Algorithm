#include<stdio.h>
void selectionSort(int arr[],int size){
    int index_min;
    for (int i=0;i<size-1;i++){
        index_min=i;
        for (int j=i+1;j<size;j++){
            if(arr[j]<arr[index_min]){
            index_min=j;
            }
        }
        if (index_min!=i){
            int temp=arr[i];
            arr[i]=arr[index_min];
            arr[index_min]=temp;
        }
        
    }
}
int main(){
        int arr[]={8,3,9,2,4,1};
    int size=sizeof(arr)/sizeof(int);
    selectionSort(arr,size);
    printf("Array elements after Selection sort:\n");
    for (int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}