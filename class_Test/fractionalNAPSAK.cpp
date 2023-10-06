#include<bits/stdc++.h>
using namespace std;

typedef struct{
    double weight,price,ppw;
}item;

bool cmp(item cA, item cB){
    if (cA.ppw==cB.ppw){
        return cA.weight>cB.weight;
        
    }

    return cA.ppw>cB.ppw;
}


double fractional_knapsack(vector<item>itemlist,double remainingSpace){
    double totalpriceAchieved=0.0;

    sort(itemlist.begin(),itemlist.end(),cmp);
    for (int i=0;i<(int) itemlist.size();i++){
        if (itemlist[i].weight<=remainingSpace){
            totalpriceAchieved+=itemlist[i].price;
            remainingSpace-=itemlist[i].weight;
        }
        else {
            totalpriceAchieved+=remainingSpace*itemlist[i].ppw;
            remainingSpace=0.0;
            break;
        }
    }




    return totalpriceAchieved;
}

int main(){
    
    int totalItems;
    double totalSpace;
    item tpitem;
    cin>>totalItems>>totalSpace;
    vector<item>itemList;
    for (int i=0;i<totalItems;i++){
        scanf("%lf %lf",&tpitem.price,&tpitem.weight);
        tpitem.ppw=tpitem.price/tpitem.weight;
        itemList.push_back(tpitem);
    }

    cout<<fractional_knapsack(itemList,totalSpace)<<endl;




    return 0;
}