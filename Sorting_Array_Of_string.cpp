#include<iostream>
using namespace std;
int main(){
    string str[10],temp;

    for (int i=0;i<10;i++){
        getline(cin,str[i]);
    }

    for (int i=0;i<9;i++){
        for (int j=0;j<9-i;j++){
            if (str[j]>str[j+1]){
                swap(str[j],str[j+1]);
            }
        }
    }

    for(int i = 0; i < 10; ++i)
    {
    cout << str[i] << endl;
    }


    return 0;
}