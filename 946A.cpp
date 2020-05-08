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
	int n, sum_pos=0, sum_neg=0, a;
	cin>>n;
	for(int i=0; i<n;i++)
	{
		cin>>a;
		if(a>=0) sum_pos+=abs(a);
		else sum_neg+=abs(a);
	}
	int ans=sum_pos+sum_neg;
	cout<<ans;
	congrats_bro_you_solve_it;
}

