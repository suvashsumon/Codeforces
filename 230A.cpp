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
	int s, n, count=0;
	cin>>s>>n;
	int x[n],  y[n];
	for(int i=0; i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(x[i]>x[j])
			{
				swap(x[i],x[j]);
				swap(y[i],y[j]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(s>x[i]) count++;
		s+=y[i];
	}
	if(count==n) cout<<"YES";
	else cout<<"NO";
	congrats_bro_you_solved_it;
}

