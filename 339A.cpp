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
	string str;
	char k;
	cin>>str;
	int n = str.size();
	for(int i=0;i<n;i=i+2)
	{
		for(int j=i+2;j<n;j=j+2)
		{
			if(str[i]>str[j])
			{
				k=str[i];
				str[i]=str[j];
				str[j]=k;
			}
		}
	}
	cout<<str;
	congrats_bro_you_solved_it;
}

