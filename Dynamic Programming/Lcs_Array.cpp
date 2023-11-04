#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000];

int fun(int arr1[],int arr2[],int n1,int n2,int i,int j){
    if (i==n1){
        return 0;
    }
    if (j==n2){
        return 0;
    }

    if (dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans=0;

    if (arr1[i]==arr2[j]){
        ans=arr1[i]+fun(arr1,arr2,n1,n2,i+1,j+1);
    }
    else {
        ans=max(fun(arr1,arr2,n1,n2,i,j+1),fun(arr1,arr2,n1,n2,i+1,j));
    }
    return dp[i][j]=ans;
}

int main(){
    memset(dp,-1,sizeof(dp));
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    for (int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for (int i=0;i<n2;i++){
        cin>>arr2[i];
    }
cout<<fun(arr1,arr2,n1,n2,0,0);


    return 0;
}