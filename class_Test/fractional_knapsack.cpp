#include<bits/stdc++.h>
using namespace std;

float p[100],w[100];
float x[100];

    void knapsack(int m,int n)
    {
        for(int i = 1; i<n; i++)
        {
            int maX = i;
            for(int j =i+1;j<=n;j++)
            {
                if(p[j]/w[j] > p[maX]/w[maX])
                {
                    maX = j;
                }
            }
            swap(p[maX],p[i]);
            swap(w[maX],w[i]);

        }

        int u = m;
        int i;
        for(i=1;i<=n;i++)
        {
            if(w[i]>u)
                break;
            x[i] = 1;
            u = u-w[i];
        }
        if(i<=n)
        {
            x[i] = u/w[i];
        }
    }


    void profit_calculation(int n)
    {
        float sum = 0;
        for(int i = 1;i<=n;i++)
            sum += x[i]*p[i];
        cout<<sum;
    }


int main()
{

   int n;    // n is the number of items
    cout<<"Enter the no. of items:";
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        cin>>p[i]>>w[i];  // Enter Profit space Weight respectively

    }
    cout<<endl;
    knapsack(50,4);
    cout<<"After Sorting according to unit profit: "<<endl;
    cout<<"profit: ";
    for(int i = 1;i<=n;i++)
        cout<<p[i]<<" ";
    cout<<endl<<"Weight: ";
    for(int i = 1;i<=n;i++)
        cout<<w[i]<<" ";
    cout<<endl;

    cout<<"You can take the items respectively portion of:"<<endl;
    for(int i = 1;i<=n;i++)
        cout<<x[i]<<" ";
    cout<<endl;
    cout<<"your total profit is: ";
    profit_calculation(n);



return 0;
}