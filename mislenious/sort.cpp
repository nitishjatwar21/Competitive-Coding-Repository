#include<iostream>
using namespace std;
    int main()

{

    int a=6;



int array1[6];
cout<<"enter n elements of array \n";
for(int k=0;k<=5;k++)
{
    cin>>array1[k];
}

for (int i = 0; i < 6; i++) {
for (int j = 0; j < 6-1; j++) {
if (array1[j] > array1[j+1]) {
swap(array1[j],array1[j+1]);
}
}
}
for(int l=0;l<=a;l++)
{
    cin>>array1[l];
}
return 0;
}
