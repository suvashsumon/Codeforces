/*
	Suvash Kumar SUMON
	B.Sc. Engineering
	Dept. of Computer Science & Engineering (CSE)
	University of Rajshahi
	suvashsumon@outlook.com
*/

#include<bits/stdc++.h>
#define congrats_bro_you_solve_it return 0;
#define cholo_suru_kora_jak() int main()

using namespace std;

cholo_suru_kora_jak()
{
	int n, arr[601]={0}, a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a>0) arr[a]++;
	}
	int Ans=0;
	for(int j=0;j<601;j++)
	{
		if(arr[j]>0) 
		Ans++;
	}
	cout<<Ans;
	congrats_bro_you_solve_it;
}

