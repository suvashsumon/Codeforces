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
	long long int n, m, sum=0;
	cin>>n>>m;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
//	for(int i=0;i<n;i++)
//	{
//		cout<<a[i]<<" ";
//	}
	int j;
	for(int i=n-1,j=1;i>=0;i--, j++)
	{
		sum+=a[i];
		if(sum>=m)
		{
			cout<<j;
			break;
		}
	}
	congrats_bro_you_solved_it;
}

