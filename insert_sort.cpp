#include <iostream>
using namespace std;
int main()
{//insertion sort
int a[100000],s,t,temp;
    cout<<"enter the array size:  ";
    cin>>s;
    for(int i=0; i<s; i++)
    {
        cin>>a[i];
    }
    for (int i=1; i<s; i++)
    {
        temp = a[i];
        t = i-1;
        while (t>=0 && a[t]>temp)
        {
            a[t+1] = a[t];
            t = t-1;
            a[t+1] = temp;
        }
    }
    for (int i=0; i<s; i++)
    cout<<a[i]<<"\t";
    return 0;
}
