/*
	Suvash Kumar SUMON
	B.Sc. Engineering
	Dept. of Computer Science & Engineering (CSE)
	University of Rajshahi
	suvashsumon@outlook.com
*/

#include<bits/stdc++.h>
#include<string.h>
#define congrats_bro_you_solved_it return 0;
#define cholo_suru_kora_jak() int main()

using namespace std;

cholo_suru_kora_jak()
{
	int x=0;
	int t;
	string str, str1="X++", str2="++X";
	cin>>t;
	while(t--)
	{
		cin>>str;
		if(str[0]=='+' || str[2]=='+')
			x+=1;
		if(str[0]=='-' || str[2]=='-')
			x-=1;
	}
	cout<<x;
	congrats_bro_you_solved_it;
}

