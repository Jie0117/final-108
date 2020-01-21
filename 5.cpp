#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
   int a1=0,a2=0,a3;
   char no,a,b,c,d,e,f,g,h,i;
   cin >> no>>a>>b>>c>>d>>e>>f>>g>>h >> i;
   switch(no)
   {
       case 'A':
        a1=1;
        a2=0;
        break;
       case 'B':
        a1=1;
        a2=1;
        break;
       case 'C':
        a1=1;
        a2=2;
        break;
       case 'D':
        a1=1;
        a2=3;
        break;
       case 'E':
       a1=1;
       a2=4;
       break;
       case 'F':
       a1=1;
       a2=5;
       break;
       case 'G':
       a1=1;
       a2=6;break;
       case 'H':
       a1=1;
       a2=7;break;
       case 'J':
       a1=1;
       a2=8;break;
       case 'K':
       a1=1;
       a2=9;break;
       case 'L':
       a1=2;
       a2=0;break;
       case 'M':
        a1=2;
       a2=1;break;
       case 'N':
        a1=2;
       a2=2;break;
       case 'P':
        a1=2;
       a2=3;break;
       case 'Q':
        a1=2;
       a2=4;break;
       case 'R':
        a1=2;
       a2=5;break;
       case 'S':
        a1=2;
       a2=6;break;
       case 'T':
        a1=2;
       a2=7;break;
       case 'U':
        a1=2;
       a2=8;break;
       case 'V':
        a1=2;
       a2=9;break;
       case 'X':
        a1=3;
       a2=0;break;
       case 'Y':
        a1=3;
       a2=1;break;
       case 'W':
        a1=3;
       a2=2;break;
       case 'Z':
        a1=3;
       a2=3;break;
       case 'I':
        a1=3;
       a2=4;break;
       case 'O':
        a1=3;
       a2=5;break;
   }
   a3=(a1*1+a2*9+(a-'0')*8+(b-'0')*7+(c-'0')*6+(d-'0')*5+(e-'0')*4+(f-'0')*3+(g-'0')*2+(h-'0')*1+(i-'0')*1);
   if(a3%10==0){
       cout <<"true\n";
   }
   else cout<<"false\n";
}