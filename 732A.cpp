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
	int k, r, i;
	cin>>k>>r;
	for(i=1;;i++)
	{
		if(((i*k)-r)%10==0 || (i*k)%10==0)
		{
			cout<<i<<endl;
			break;
		}
	}
	

	congrats_bro_you_solve_it;
}

