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
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int aa=a[n-1];
	cin>>n;
	int b[n];
	for(int i=0;i<n;i++) cin>>b[i];
	sort(b,b+n);
	int bb=b[n-1];
	cout<<aa<<" "<<bb;
	congrats_bro_you_solved_it;
}


