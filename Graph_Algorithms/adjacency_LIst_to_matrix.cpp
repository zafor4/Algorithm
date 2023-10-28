#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int j=0;

    vector<int>v1,v2;



    for (int i=0;i<n;i++){
        while (j<n){
            if (arr[i][j]==1){
                v1.push_back(i);
                v2.push_back(j);
                j++;
                break;
            }
                j++;
        }
    }

    for (int i=0;i<v1.size();i++){
        cout<<v1[i]<<" "<<v2[i]<<endl;
    }


    return 0;
}