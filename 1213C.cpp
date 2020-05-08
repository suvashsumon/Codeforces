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

long long int sum_of(long long int n, long long int m)
{
	long long int sum = 0;
	for (int i = m; i<=n; i+=m)
	{
		int rim = m%10;
		sum+=rim;
	}
	return sum;
}

cholo_suru_kora_jak()
{
	long long int q, n, m;
	cin>>q;
	while(q--)
	{
		cin>>n>>m;
		cout<<sum_of(n,m)<<endl;
		
	}
	congrats_bro_you_solved_it;
}

