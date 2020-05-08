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
	char str[30];
	long long int t, ans, i;
	cin>>t;
	for(int j=1; j<=t; j++)
	{
		scanf("%s", str);
		long long int len = strlen(str);
		unsigned long long factorial = 1;
  		for(i = 1; i <=len; ++i)
    	{
         		factorial *= i;
    	}
		ans = factorial/2;
		cout<<"Data set"<<j<<": "<<ans<<endl;
	}
	congrats_bro_you_solved_it;
}

