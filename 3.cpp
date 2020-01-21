#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	int n,s,x,arr[200]={0};
    cin >>s>>n;
    srand(s);
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%102+99;
    }
    while(cin >>x)
    {
       
        if(x<=0){
            break;
        }
        else cout <<arr[x-1]<<endl;
        
    }


}