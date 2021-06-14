#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of elements";
	cin>>n;
	int a[n],swapped=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swapped=1;
				swap(a[j],a[j+1]);
			}
		}
		if(swapped==0)
		{
			cout<<"Array is in sorted array";
			break;
		}
	}cout<<"array after sorted";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
