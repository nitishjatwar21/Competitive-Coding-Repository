#include <iostream>
using namespace std;
    int main()
    {
        int z,p,k,l;
       cout<<"enter no of tests";
       cin>>z;
        for(p=1;p<=z;p++)
        {  k=1;

           cout<<"enter no of players";
        cin>>l;
        int g[l],f[l],i,r[l],t;
            cout<<"enter goals of each player \n";
            for(i=0;i<l;i++)
            {
              cin>>g[i];
            }
            cout<<"enter fouls of each player";
             for(i=0;i<l;i++)
            {
              cin>>f[i];
            }
            for(i=0;i<l;i++)
            {
               r[i]=20*g[i]-10*f[i];
               if(r[i]<0)
               {
                   r[i]=0;
               }
            }
            t=r[0];
            for(i=1;i<l;i++)
            {
              if(r[i]>t)
              {
                  t=r[i];
              }
            }
            for(i=0;i<l;i++)
            {
               if(t==r[i])
                break;
               k++;
            }
            cout<<k<<"\n";
            cout<<t<<"\n";

    }
    return 0;
    }
