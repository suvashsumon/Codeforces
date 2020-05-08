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
	long long int n, lol, rem, ans;
	cin>>n;
	if(n%10==0) cout<<n;
	else
	{
		rem=n%10;
		lol=10-rem;
		if(lol<rem) ans=n+lol;
		else ans=n-rem;
		cout<<ans;
	}
	congrats_bro_you_solve_it;
}
