#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,temp;
	cout<<"Enter the number of array elements";
	cin>>n;
	int a[n];
		cout<<"Enter the array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0,j=n-1;i<(n/2);i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	cout<<"Array after reversing the elements ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
