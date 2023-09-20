#include<iostream>
using namespace std;
int main(){
    float weight[3];
    float price[3];
    float capacity;
    for(int i=0;i<3;i++){
        cin>>weight[i];
    }
    for (int i=0;i<3;i++){
        cin>>price[i];
    }
    cin>>capacity;
    float unit_price[3];
    for (int i=0;i<3;i++){
        unit_price[i]=price[i]/weight[i];
    }



    return 0;
}