#include <iostream>
using namespace std;
int main()
{
    int x,xx=0,x1;
    cin >> x;
    x1=x;
    for(int j=2;j<x;j++)
    {
        if(x%j==0)
        {
            xx++;
        }
    }
    if(xx==0)
    {
        if(x!=0)
        cout<<" "<<1<<" "<<x<<endl;
    }
    else if(xx!=0)
    {
        cout <<" ";
        for(int k=0;k<x1;k++)
        {
        for(int i=2;i<=x;i++)
        {   
            if(x%i==0)
            {
                cout<<i<<" ";
                x=x/i;
                break;
            }
        }
       }
       cout <<"\n";   
    }
}