#include<bits/stdc++.h>
using namespace std;
int ffdecreasing(int weight[],int n,int c){
    int res=0;
    int binrem[n];
    sort(weight,weight+n,greater<int>());

    for (int i=0;i<n;i++){
        int j;
        for (j=0;j<res;j++){
            if (binrem[j]>=weight[i]){
                binrem[j]=binrem[j]-weight[i];
                break;
            }
        }
        if (j==res){
            binrem[res]=c-weight[i];
            res++;

        }
        
    }
    return res;
}
int main(){
    int weight[]={2,5,4,7,1,3,8};
    int n=sizeof(weight)/sizeof(int);
    int c=10;
    cout<<ffdecreasing(weight,n,c);


    return 0;
}