#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
    return ((a.first/a.second)>(b.first/b.second));
    
}

int main(){
    int n,w;
    cin>>n>>w;
    double weight[n], price[n];

    vector<pair<double,double>>p(n);

    for (int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }

vector <double >v;
int pft=0;
    sort(p.begin(),p.end(),cmp);
int i=0;
    while (i<n){

        if (w==0){
            break;
        }
        if (p[i].second<=w){
            v.push_back(p[i].second);
            pft+=p[i].first;
            w-=p[i].second;
        }
        else {
            double d=(p[i].first/p[i].second)*w;
            v.push_back(w);
            pft+=d;
            w=0;
        }
        i++;
    }

    cout<<"check"<<endl;

    cout<<"max profit :"<<pft<<endl;
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    return 0;
}