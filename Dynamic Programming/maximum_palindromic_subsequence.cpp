#include<bits/stdc++.h>
using namespace std;
int dp[10005][10005];
string str;

int fun(int b,int e){
    if (b>=e){
        return 1;
    }
    if (dp[b][e]!=-1){
        return dp[b][e];
    }

    if (str[b]==str[e]){
        return dp[b][e]=fun(b+1,e-1);
    }
    else {
        return dp[b][e]=0;
    }
}


int main(){
    cin>>str;
    int n=str.length();
    int ans=0;
    for (int i=0;i<n-1;i++){
        for (int j=0;j<i;j++){
            if (fun(i,j)){
                ans=max(ans,j-i+1);
            }
        }
    }
cout<<ans<<endl;

    return 0;
}