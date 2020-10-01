


#include<iostream>
using namespace std;
    int main()

{
    int a;
    int array1[a];
cout<<"enter storage of array";
cin>>a;

cout<<"enter n elements of array";
for(int k=0;k<=a;k++)
{
    cin>>array1[k];
}

for (int i = 0; i < a; i++) {
for (int j = 0; j < a-1; j++) {
if (array1[j] > array1[j+1]) {
swap(array1[j],array1[j+1]);
}
}
}
for(int l=0;l<=a;l++)
{
    cin>>array1[l];
}


 /*
double x = 0.3*3+0.1;
double y = 0.3*3+0.09999999999;
printf("%.20f\n", x); // 0.99999999999999988898

if ((x-y) < 1e-9) {
cout<<"a and b are equal";
}
cout<<x-y;

 /*   long long c=253699876675LL;
    long long a=24657575458759LL;
    long long b=-121242422534364LL;
    long long d=a+b;

 cout<<(a%c+b%c)%c<<"\n";
 a = (a+b)%c;
 cout<<a<<"\n";
if (a < 0) a += b;
cout<<a<<"\n";

cout<<d%c<<"\n";


ios::sync_with_stdio(0);
cin.tie(0);  IT MAKES PROGRAMME FASTER COMPILATION */
    /*
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout); IT IS USE TO TAKE INPUT FROM FILE EASILY
string s;

getline(cin,s);
cout<<s; */
return 0;
}
