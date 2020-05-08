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
	set<int>sala;
	int n, x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		sala.insert(x);
	}
	int l=sala.size();
	cout<<n-l;
	congrats_bro_you_solved_it;
}

