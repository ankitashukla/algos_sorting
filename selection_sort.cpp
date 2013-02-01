#include <iostream>
using namespace std;
int main()
{
//selection sort
int a[100000],s,temp,min;
    cout<<"enter the array size:  ";
    cin>>s;
     for(int i=0; i<s; i++)
    {
        cin>>a[i];
    }



    for (int i=0; i<s; i++)
    {
         for (int j=i+1 ;j<s; j++)
                if (a[j] < a[min]) min = j;
                temp = a[i];
                a[i] = a[min];
                a[min] = temp;
    }
    for (int j=0; j<s; j++)
    cout<<a[j]<<"\t";
    return 0;
}
