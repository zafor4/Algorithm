#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int dp[N];

int fib(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    if (dp[n]!=-1){
        return dp[n];
    }
//top down approach;

    return dp[n]=fib(n-1)+fib(n-2);



}

int main(){
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    int result=fib(n);
    cout<<result<<endl;
dp[0]=0;
dp[1]=1;
for (int i=2;i<n;i++){
    dp[i]=dp[i-1]+dp[i-2];
}
for (int i=0;i<=n;i++){
    cout<<dp[i];
}
    return 0;
}
