#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int s,arr[200]={0},x=0;
    cin >> s;
    srand(s);
    for(int i=0;i<200;i++)
    {
        arr[i]=rand()%200+1;
    }
    for(int j=1;j<200;j++)
    {
        for(int k=0;k<200-j;k++)
        {
            if(arr[k]>arr[k+1])
            {
                x=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=x;
                
            }
        }
    }
  
   for(int m=0;m<200;m++)
   {
      if(arr[m]%2==0){
          cout <<m+1<<endl;
      }
   }


  
}