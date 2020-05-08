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
	long long int t, f, s, i,ans;
	cin>>t;
	while(t--)
	{
		int sum=0;
		cin>>f>>s;
		if(f%2==0 && s%2==1) ans=f/2 + (-1 *((s/2)+1));
		else if(f%2==0 && s%2==0) ans=f/2 + s/2;
		else if(f%2==1 && s%2==0) ans=1+ s/2 + (-1 * (f/2 + 1));
		else if(f%2==1 && s%2==1) ans=-1 * (f/2 + s/2 + 1);
		cout<<ans<<endl;
	}
	congrats_bro_you_solved_it;
}

