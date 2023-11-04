#include<stdio.h>

void sorting(int arr[],int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sorting(arr,n);
    int amount;
    scanf("%d",&amount);
    int count=0;
    // for (int i=0;i<n;i++){
    //     while (amount>=arr[i]){
    //         amount-=arr[i];
    //         count+=1;
    //     }
    //     if (amount==0){
    //         break;
    //     }
    // }
        for (int i=0;i<n;i++){

            if (amount==0){
                break;
            }
            if (amount>=arr[i]){
                count+=amount/arr[i];
                amount=amount%arr[i];
            }
        }
    printf("%d",count);
    

    return 0;
}