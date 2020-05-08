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
	
//	FILE* fp = freopen("input.txt", "r", stdin);


	
	int n,k;
	string s;

//	while() 
//	{
		cin>>n>>k;
		int ar[n];
		int ans=0;
		cin>>s;
		for(int i=0;i<n;i++)
		{
			ar[i]=s[i]-96;
		}
		sort(ar,ar+n);
		for(int i=0;i<k;i++) ans+=ar[i];
//		fclose(fp);
		cout<<ans<<endl;
//	}

	congrats_bro_you_solved_it;
}

