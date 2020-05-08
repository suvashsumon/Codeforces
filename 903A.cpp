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
	int test, t;
	cin>>t;
	while(test--)
	{
		cin>>t;
		if((t%3==0 || t%7==0 || (t%7)%3==0 || (t%3==1 && t>6)|| (t%3==2 && t>12))) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	congrats_bro_you_solved_it;
}

