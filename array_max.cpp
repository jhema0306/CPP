#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,a[n];
 cout<<" Enter number of elements to be inserted into the array";
 cin>>n;
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 for(int j=0;j<n;j++)
 {
     cout<<a[j]<<" ";
 }
 int maxi=INT_MIN;
 for(int i=0;i<n;i++)
 {
 	if(maxi<a[i])
 	{
 		maxi=a[i];
	 }
 }
 cout<<endl;
 cout<<" The maximum element in the array is"<<maxi;
}
