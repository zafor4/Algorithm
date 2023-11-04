#include<bits/stdc++.h>
using namespace std;

int max(int a,int b){
    return (a>b)?a:b;
}

int dp[1005][1005];

int knapsack(int w,int wt[],int val[],int n){
    if (n==0 || w==0){
        return 0;

    }
    if (dp[n-1][w]!=-1){
        return dp[n][w];
    }

    if (wt[n-1]>w){
        return dp[n-1][w]=knapsack(w,wt,val,n-1);
    }
    else {
        return dp[n-1][w]= max(val[n-1]+knapsack(w-wt[n-1],wt,val,n-1),knapsack(w,wt,val,n-1));
    }
}

int main(){
    memset(dp,-1,sizeof(dp));
    int profit[]={60,100,120};
    int weight[]={10,20,30};
    int w=50;
    int n=sizeof(profit)/sizeof(profit[0]);
    cout<<knapsack(w,weight,profit,n);


    return 0;
}