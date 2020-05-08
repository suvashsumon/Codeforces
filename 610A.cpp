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
	int n, max, min;
	cin>>n;
	max=(n/7)*2;
	min=(n/7)*2;
	n=n%7;
	if(n==1) max=max+1;
	else if(n>1) max=max+2;
	if(n>5) min=min+(n-5);
	cout<<min<<' '<<max<<endl;
	
	congrats_bro_you_solved_it;
}

