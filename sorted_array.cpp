#include<bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of the array";
	cin>>n;
	int a[n];
	cout<<"elements of array are";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	
	}
	int flag=0;
	for (int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				flag=1;
				break;
			}
		}
		
	}
	if(flag==0)
	{
	cout<<"array is in sorted order ";
	}
	else
	{
		cout<<"array is not in sorted order";
	}
	
}
