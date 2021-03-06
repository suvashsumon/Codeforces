// This code is generated by ProgAst on Mon Apr 13 19:45:34 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-230B.cpp
// Problem Link:

// Author : Suvash Kumar Sumon

#include<bits/stdc++.h>
using namespace std;

#define fio freopen("input.txt","r",stdin);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//fio;
	long long int status[1000100];
	for(long long int i=0; i<1000100; i++) status[i] = 1;
	for(long long int i=2;i<=1000100;i++)
     {
     	if(status[i]==1)
     	{
     		for(long long int j=i*i;j<=1000100;j=j+i)
     		{
     			status[j]=0;
     		}
     	}
     }

	int total;
	cin>>total;
	long long int x, temp;
	while(total--)
    {
        cin>>x;
        temp = sqrt(x);
        if(x==1) cout<<"NO"<<endl;
        else
            {
                if(status[temp]==0 || temp*temp!=x) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
    }
	return 0;
}
