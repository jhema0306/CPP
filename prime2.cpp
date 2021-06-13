#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"enter a number:";
	cin>>n;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
       	{
       		cout<<"it is not a prime";
       		count=1;
       		break;
       	}
       }
       if(count==0)
          {
          	cout<<"it is a prime";
          	return 0;
          }
      }
