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
	int n;
	cin>>n;
	while(n>0)
	{
		if(n%1000==144) n=n/1000;
		else if(n%100==14) n=n/100;
		else if(n%10==1) n=n/10;
		else
		{
			cout<<"NO";
			congrats_bro_you_solved_it;
		}
	}
	cout<<"YES";
	congrats_bro_you_solved_it;
}

