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
		for (int j=0; j<s-i; j++)
		if (a[j]>a[j+1])
		{
			temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
			}
            }
		for (int j=0; j<s; j++)
		cout<<a[j]<<"\t";
		return 0;

}
