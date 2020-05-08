/*
	Suvash Kumar SUMON
	B.Sc. Engineering
	Dept. of Computer Science & Engineering (CSE)
	University of Rajshahi
	suvashsumon@outlook.com
*/

#include<bits/stdc++.h>
#define congrats_bro_you_solved_it return 0;
#define cholo_suru_kora_jak() int main()

using namespace std;

cholo_suru_kora_jak()
{
	int n, k, count=0;
	cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int j=0;
	while(ar[j]<=k)
	{
		ar[j]=0;
		j++;
	}
//	for(int i=0;i<n;i++)
//	{
//		cout<<ar[i]<<" ";
//	}
	int p=n-1;
	while(ar[p]<=k)
	{
		ar[p]=0;
		p--;
	}
//	for(int i=0;i<n;i++)
//	{
//		cout<<ar[i]<<" ";
//	}
	for(int i=0;i<n;i++)
	{
		if(ar[i]==0) count++;
//		cout<<count<<" ";
	}
	cout<<count;
	congrats_bro_you_solved_it;
}

