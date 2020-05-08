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
	int nA,nB,k,m,i;
    cin>>nA>>nB>>k>>m;
    int a[nA+10],b[nB+10];
    for(i=0;i<nA;i++)
        cin>>a[i];
    for(i=0;i<nB;i++)
        cin>>b[i];
    if(a[k-1]<b[nB-m])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
	congrats_bro_you_solved_it;
}

