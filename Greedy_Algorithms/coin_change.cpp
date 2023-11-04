#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
    int notes[]={1,2,5,10,20};
    int notes_size=sizeof(notes)/sizeof(int);
    void findMin(int value){
        sort(notes,notes+notes_size);
        vector<int> ans;
        for (int i=notes_size-1;i>=0;i--){

            while(value>=notes[i]){
                value-=notes[i];
                ans.push_back(notes[i]);
            }
        }
        for (int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
int main(){
    int n;
    cin>>n;
    findMin(n);

    return 0;
}