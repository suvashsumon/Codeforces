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
	int n,i,s=0;
	cin>>n;
	int a[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	a[0]=0;
	for(i=0;i<n;i++)
	{
		if((a[i+1]-a[i])<=15)
		{
			s=a[i+1];
		}
		else if((a[i+1]-a[i])>15)
		{
			s=a[i]+15;
			if(s>90)
			{
				cout<<"90";
				return 0;
			}
			else {cout<<s; return 0;}
		}
	}
	if((s+15)<90){
	cout<<s+15<<endl;}
	else cout<<"90";
	congrats_bro_you_solved_it;
}

