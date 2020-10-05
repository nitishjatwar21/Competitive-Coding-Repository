#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0,c=0;
    cout<<"enter test case";
    cin>>t;

    for(int i=1;i<=t;i++)
    {
       cout<<"no of cave";
       cin>>c;
      int l=0,u=0,h=0,p=0,q=0,z=0,jk=0;
    int cave[c+1],jombi[c],power[c+1];

     for(int x=1;x<=c;x++)
    {
        cave[x]=0;
    }

     cout<<"enter  power";
     for(int x=1;x<=c;x++)
    {
        cin>>power[x];
    }
    cout<<"enter jombi power";
     for(int y=0;y<c;y++)
    {
        cin>>jombi[y];
    }

     for(int k=1;k<=c;k++)
    {
        l=k-power[k];
        u=k+power[k];
        if(l<=1)
            l=1;
        if( u>=c)
        u=c;
        for(l;l<=u;l++)
        {
            cave[l]++;
        }

    }
    for(int k=0;k<c;k++){
            cout<<jombi[k]<<" ";
            }

int nse=c+1;

            sort(cave, cave+nse);
            sort(jombi, jombi+c);
            cout<<"\n"<<"cave";
       for(int k=0;k<c;k++){
            cout<<cave[k]<<" ";
            }
            cout<<"\n"<<"jombi";
             for(int kp=0;kp<c;kp++){
            cout<<jombi[kp]<<" ";
            }

           for(int pq=0;pq<c;pq++)
           {
               if(cave[pq]!=jombi[pq])
                jk++;
           }
            if(jk==0)
            cout<<"YES"<<"\n";
              else
            cout<<"NO"<<"\n";
    }
    return 0;
}
