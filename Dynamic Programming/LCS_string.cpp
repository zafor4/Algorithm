#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000];


int fun(string str1,string str2,int i,int j){
    int l1=str1.length();
    int l2=str2.length();

    if ( i==l1){
        return 0;
    }
    if (j==l2){
        return 0;
    }
    if (dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans=0;
if (str1[i]==str2[j]){
    ans=1+fun(str1,str2,i+1,j+1);
}
else {
    ans=max(fun(str1,str2,i+1,j),fun(str1,str2,i,j+1));
}
return dp[i][j]=ans;

}


int main(){

    memset(dp,-1,sizeof(dp));

    string str1,str2;

    cin>>str1>>str2;

    cout<<fun(str1,str2,0,0)<<endl;

    return 0;
}