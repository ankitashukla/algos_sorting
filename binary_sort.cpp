#include <iostream>
using namespace std;
int main()
{
//bubble sort
int a[100000],s,temp;
    cout<<"enter the array size:  ";
    cin>>s;
     for(int i=0; i<s; i++)
    {
        cin>>a[i];
    }
    for (int i=1; i<s; i++)
    {
        for (int j=0; j<s-i; j++)           //coz binary sort needs a pre-sorted array
		if (a[j]>a[j+1])
		{
			temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
		}
    }
	//binary search
		int x;
		cout<<"\n Enter the element to be indexed: ";
		cin>>x;
		int first=0,last=s-1,mid,index;
		while (first <= last)
		{
		    mid = (first + last)/2;
		    if (a[mid] == x) index = mid;
		    if (a[mid] > x)
		    last = mid - 1;
		    else first = mid + 1;
		}
		cout<<"\nIts index is "<<index+1;
		return 0;
}
