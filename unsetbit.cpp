#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,pos,result;
	cout<<"Enter the number:";
	cin>>num;
	cout<<"Enter the position u want to unset:";
	cin>>pos;
	result=num^((pos-1)<<1);
	cout<<"the result after unsetting bit";
	cout<<result;
}
