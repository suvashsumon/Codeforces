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
	long long int s, a, b, c, t, buy, bon, ans;
	cin>>t;
	while(t--)
	{
		cin>>s>>a>>b>>c;
		buy=s/c;
		//cout<<buy<<endl;
		bon=(buy/a)*b;
		//cout<<bon<<endl;
		ans=buy+bon;
		cout<<ans<<endl;
	}
	congrats_bro_you_solved_it;
}

