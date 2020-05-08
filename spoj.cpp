/*
	Suvash Kumar SUMON
	B.Sc. Engineering
	Dept. of Computer Science & Engineering (CSE)
	University of Rajshahi
	suvashsumon@outlook.com
*/

#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#define congrats_bro_you_solved_it return 0;
#define cholo_suru_kora_jak() int main()

using namespace std;

cholo_suru_kora_jak()
{
	int n, a, b;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		int ans = pow(a,b);
		ans%=10;
		cout<<ans<<endl;
	}
	congrats_bro_you_solved_it;
}

