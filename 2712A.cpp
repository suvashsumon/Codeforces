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
	int y, a, b, c, d;
	cin>>y;
	for(int i=y+1;;i++)
	{
		a = i / 1000;
		b = (i / 100) % 10;
		c = (i / 10) % 10;
		d = i % 10;
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
		{
			cout<<i;
			break;
		}
	}
	congrats_bro_you_solved_it;
}

