//calculating x using recursion.
#include<stdio.h>
int GCD(int x,int n){
    if (n==1){
        return x;
    }
    return x*GCD(x,n-1);

}
int main(){
    int x,n;
    scanf("%d%d",&x,&n);
    int result=GCD(x,n);
    printf("%d",result);
    return 0;
}