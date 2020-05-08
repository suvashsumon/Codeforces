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
	long long int n,m,a,x,y;
    cin>>n>>m>>a;
    x=n/a;
    if(n%a!=0) x++;
    y=m/a;
    if(m%a!=0) y++;
    cout<<x*y;
	congrats_bro_you_solved_it;
}

