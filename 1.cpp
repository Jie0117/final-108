#include <iostream>
using namespace std;
void star(int a, int b);
int main()
{
    int a;
    cin >> a;
    star(a,a);
}
void star(int a,int b)
{
    int k=a*2-3;
    for (int i = 0; i <=a;i++)
    {
        for (int k = a; k > i;k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i*2-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i1 = 0; i1 < a;i1++)
    {
        for (int i2 = 0; i2 <= i1;i2++)
        {
            cout << " ";
        }
        for (int i3 = 0; i3 < k;i3++)
        {
            cout << "*";
            
        }
        cout << endl;
        k = k - 2;
    }
}