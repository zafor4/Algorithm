#include<bits/stdc++.h>
using namespace std;


long long dp[1001][1001];

int fun(int n,int arr[],int current,int prev){
    if (current==n){
        return 0;
    }
    if (dp[current][prev+1]!=-1){
        return dp[current][prev+1];
    }
    int take=0;
    int not_take=0;
    if (arr[prev]==-1 || arr[current]>arr[prev]){
        take=arr[current]+fun(n,arr,current+1,current);
    }

    not_take=0+fun(n,arr,current+1,prev);

    return dp[current][prev+1]= max(take,not_take);
}


int main(){
    int t;
    cin>>t;
    while (t--){

    memset(dp,-1,sizeof(dp)+1);

    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<fun(n,arr,0,-1)*n<<endl;

    }
    return 0;
}