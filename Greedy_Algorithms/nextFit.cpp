#include<bits/stdc++.h>
using namespace std;
int nextfit(int weights[],int n,int capacity){
    int res=0;
    int bin_rem=capacity;
    for (int i=0;i<n;i++){
        if (weights[i]>bin_rem){
            res++;
            bin_rem=capacity-weights[i];
        }
        else {
            bin_rem-=weights[i];
        }
    }
    return res;
}
int main(){
    int weight[]={2,5,4,7,1,3,8};
    int n=sizeof(weight)/sizeof(int);
    int c=10;
    cout<<nextfit(weight,n,c);


    return 0;

}