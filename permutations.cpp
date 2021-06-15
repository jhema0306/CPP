#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
string s="abc";
int n=s.size();
void Permut(string abc,int vis[])
{
    if(s.size()==abc.size())
    {
        cout<<abc<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            Permut(abc+s[i],vis);
            vis[i]=0;
        }
    }
}
int main() 
{
	string abc="";
	int res[n]={0};
	Permut(abc,res);
	return 0;
}
