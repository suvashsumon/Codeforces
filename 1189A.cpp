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
	int n;
	string str;
	cin>>n>>str;
	for(int i=0;i<n;i++)
	{
		
		cout<<str[i];
		if((i+1)==(n/2)) cout<<" ";
	}
	congrats_bro_you_solve_it;
}

