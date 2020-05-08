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

int min_sum(int n, int l)
{
	int x = 1, sum = 0;
	for(int i=0; i<l; i++)
	{
		sum+=x;
		x*=2;
	}
	for(int i= l; i<n; i++)
	{
		sum++;
	}
	return sum;
}

int max_sum(int n, int r)
{
	int sum = 0, x = 1, lol;
	for(int i=0; i<r; i++)
	{
		sum+=x;
		x*=2;
		
	}
	x/=2;
	for(int i=r; i<n; i++)
	{
		sum+=x;
	}
	return sum;
}

cholo_suru_kora_jak()
{
	int n, l, r;
	cin>>n>>l>>r;
	int min = min_sum(n,l);
	int max = max_sum(n,r);
	cout<<min<<" "<<max;
	congrats_bro_you_solved_it;
}

