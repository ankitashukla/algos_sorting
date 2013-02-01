#include <iostream>
using namespace std;

    void merge(int a[], int low, int high);
    void mergesort(int a[], int low, int high)
    {
        if (low<high)       //array has atleast two elements
        {

            int mid = (low+high)/2;
            mergesort(a, low, mid);
            mergesort(a, mid+1, high);
            merge (a, low, high);
        }
    }

void merge(int a[], int low, int high)
{
    int h,i,j,k,mid,b[10000];
    h=low;
    i=low;
    j=mid+1;
    while ((h<=mid)&&(j<=high))
    {
        if (a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>mid)
    {
        for(k=j; k<=high; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for (k=h; k<=mid; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for (k=low; k<=high; k++)
        a[k]=b[k];
}




int main()
{
//merge sort
int a[100000],s,temp;
    cout<<"enter the array size:  ";
    cin>>s;
     for(int i=0; i<s; i++)
    {
        cin>>a[i];
    }

    mergesort(a, 0, s-1);

    for (i=0;i<s;i++)
    cout<<a[i]<<"\t";
 return 0;
}
