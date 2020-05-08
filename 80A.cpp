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
	int a, b, first_index;
	int ar[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	cin>>a>>b;
	for(int i=0;i<15;i++)
	{
		if(ar[i]==a)
		{
			first_index = i;
		}
	}
	if(ar[first_index+1]==b) cout<<"YES";
	else cout<<"NO";
	congrats_bro_you_solved_it;
}

