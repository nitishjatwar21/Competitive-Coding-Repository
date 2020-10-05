
#include<iostream>
using namespace std;
    int main()
    {

        int a[40],i,j;
        a[0]=1,a[1]=1;
        for(i=2;i<=30;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }

        for(j=0;j<=30;j++)
        {
            cout<<a[j]<<"\n";
        }

        return 0;
    }
